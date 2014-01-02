/*=========================================================================
*
*  Copyright Insight Software Consortium
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*         http://www.apache.org/licenses/LICENSE-2.0.txt
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*=========================================================================*/
#include "sitkProcessObject.h"
#include "sitkCommand.h"

#include "itkProcessObject.h"
#include "itkCommand.h"

#include <iostream>
#include <algorithm>


#if defined SITK_HAS_STLTR1_TR1_FUNCTIONAL
#include <tr1/functional>
#elif defined SITK_HAS_STLTR1_FUNCTIONAL
#include <functional>
#else
#error "No system tr1 functional available"
#endif

namespace itk {
namespace simple {

namespace
{
static bool GlobalDefaultDebug = false;

static itk::AnyEvent eventAnyEvent;
static itk::AbortEvent eventAbortEvent;
static itk::DeleteEvent eventDeleteEvent;
static itk::EndEvent eventEndEvent;;
static itk::IterationEvent eventIterationEvent;
static itk::ProgressEvent eventProgressEvent;
static itk::StartEvent eventStartEvent;
static itk::UserEvent eventUserEvent;

const itk::EventObject &GetITKEventObject(EventEnum e)
{
  switch (e)
    {
    case sitkAnyEvent:
      return eventAnyEvent;
    case sitkAbortEvent:
      return eventAbortEvent;
    case sitkDeleteEvent:
      return eventDeleteEvent;
    case sitkEndEvent:
      return eventEndEvent;
    case sitkIterationEvent:
      return eventIterationEvent;
    case sitkProgressEvent:
      return eventProgressEvent;
    case sitkStartEvent:
      return eventStartEvent;
    case sitkUserEvent:
      return eventUserEvent;
    default:
      sitkExceptionMacro("LogicError: Unexpected event case!");
    }
}

class SimpleAdaptorCommand
  : public itk::Command
{
public:

  typedef SimpleAdaptorCommand Self;
  typedef SmartPointer< Self >  Pointer;

  itkNewMacro(Self);

  itkTypeMacro(SimpleAdaptorCommand, Command);

  void SetSimpleCommand( itk::simple::Command *cmd )
    {
      m_That=cmd;
    }

  /**  Invoke the member function. */
  virtual void Execute(Object *, const EventObject & )
  {
    if (m_That)
      {
      m_That->Execute();
      }
  }

  /**  Invoke the member function with a const object */
  virtual void Execute(const Object *, const EventObject & )
  {
    if ( m_That )
      {
      m_That->Execute();
      }
  }

protected:
  itk::simple::Command *                    m_That;
  SimpleAdaptorCommand():m_That(0) {}
  virtual ~SimpleAdaptorCommand() {}

private:
  SimpleAdaptorCommand(const Self &); //purposely not implemented
  void operator=(const Self &);        //purposely not implemented
};


}

//----------------------------------------------------------------------------

//
// Default constructor that initializes parameters
//
ProcessObject::ProcessObject ()
  : m_Debug(ProcessObject::GetGlobalDefaultDebug()),
    m_NumberOfThreads(ProcessObject::GetGlobalDefaultNumberOfThreads()),
    m_ActiveProcess(NULL)
{
}

//
// Default destructor
//
ProcessObject::~ProcessObject ()
{
  Self::RemoveAllCommands();
}

std::ostream & ProcessObject::ToStringHelper(std::ostream &os, const char &v)
{
  os << int(v);
  return os;
}

std::ostream & ProcessObject::ToStringHelper(std::ostream &os, const signed char &v)
{
  os << int(v);
  return os;
}

std::ostream & ProcessObject::ToStringHelper(std::ostream &os, const unsigned char &v)
{
  os << int(v);
  return os;
}


void ProcessObject::DebugOn()
{
  this->m_Debug = true;
}

void ProcessObject::DebugOff()
{
  this->m_Debug = false;
}

bool ProcessObject::GetDebug() const
{
  return this->m_Debug;
}


void ProcessObject::SetDebug( bool debugFlag)
{
  this->m_Debug = debugFlag;
}


void ProcessObject::GlobalDefaultDebugOn()
{
  GlobalDefaultDebug = true;
}

void ProcessObject::GlobalDefaultDebugOff()

{
  GlobalDefaultDebug = false;
}

bool ProcessObject::GetGlobalDefaultDebug()
{
  return GlobalDefaultDebug;
}

void ProcessObject::SetGlobalDefaultDebug(bool debugFlag)
{
  GlobalDefaultDebug = debugFlag;
}

void ProcessObject::GlobalWarningDisplayOn()
{
  itk::Object::GlobalWarningDisplayOn();
}

void ProcessObject::GlobalWarningDisplayOff()
{
  itk::Object::GlobalWarningDisplayOn();
}

bool ProcessObject::GetGlobalWarningDisplay()
{
  return itk::Object::GetGlobalWarningDisplay();
}

void ProcessObject::SetGlobalWarningDisplay(bool flag)
{
  itk::Object::SetGlobalWarningDisplay(flag);
}


void ProcessObject::SetGlobalDefaultNumberOfThreads(unsigned int n)
{
  MultiThreader::SetGlobalDefaultNumberOfThreads(n);
}

unsigned int ProcessObject::GetGlobalDefaultNumberOfThreads()
{
  return MultiThreader::GetGlobalDefaultNumberOfThreads();
}

void ProcessObject::SetNumberOfThreads(unsigned int n)
{
  m_NumberOfThreads = n;
}

unsigned int ProcessObject::GetNumberOfThreads() const
{
  return m_NumberOfThreads;
}


int ProcessObject::AddCommand( EventEnum event, Command *cmd)
{
  if (cmd)
    {
    m_Commands.push_back(EventCommandPairType(event,cmd));
    cmd->AddProcessObject(this);
    }
  return 0;
}

void ProcessObject::RemoveAllCommands()
{
  std::list<EventCommandPairType> oldCommands;
  swap(oldCommands, m_Commands);
  oldCommands.sort();
  oldCommands.unique();
  std::list<EventCommandPairType>::iterator i = oldCommands.begin();
  while( i != oldCommands.end() )
    {
    // note: we may call remove multiple times on the same command
    i++->second->RemoveProcessObject(this);
    }
}

bool ProcessObject::HasCommand( EventEnum event ) const
{
  std::list<EventCommandPairType>::const_iterator i = m_Commands.begin();
  while( i != m_Commands.end() )
    {
    if (i->first == event)
      {
      return true;
      }
    }
  return false;
}

float ProcessObject::GetProgress( ) const
{
  if ( this->m_ActiveProcess )
    {
    return this->m_ActiveProcess->GetProgress();
    }
  return 0.0;
}

void ProcessObject::Abort()
{
  if ( this->m_ActiveProcess )
    {
    this->m_ActiveProcess->AbortGenerateDataOn();
    }
}

void ProcessObject::PreUpdate( itk::ProcessObject *p )
{
  assert(p);

  itk::SimpleMemberCommand<Self>::Pointer onDelete = itk::SimpleMemberCommand<Self>::New();
  onDelete->SetCallbackFunction(this, &Self::OnActiveProcessDelete );
  p->AddObserver(itk::DeleteEvent(), onDelete);

  this->m_ActiveProcess = p;

  p->SetNumberOfThreads(this->GetNumberOfThreads());


  for (std::list<EventCommandPairType>::iterator i = m_Commands.begin();
       i != m_Commands.end();
       ++i)
    {
    const itk::EventObject &itkEvent = GetITKEventObject(i->first);

    Command *cmd = i->second;

    SimpleAdaptorCommand::Pointer itkCommand = SimpleAdaptorCommand::New();
    itkCommand->SetSimpleCommand(cmd);

    this->PreUpdateAddObserver(p, itkEvent, itkCommand );
    }

  if (this->GetDebug())
     {
     std::cout << "Executing ITK filter:" << std::endl;
     p->Print(std::cout);
     }

}


void ProcessObject::PreUpdateAddObserver( itk::ProcessObject *p,
                                          const itk::EventObject &e,
                                          itk::Command *c)
{
  p->AddObserver(e,c);
}

itk::ProcessObject *ProcessObject::GetActiveProcess( )
{
  if (this->m_ActiveProcess)
    {
    return this->m_ActiveProcess;
    }
  sitkExceptionMacro("No active process for \"" << this->GetName() << "\"!");
}

void ProcessObject::OnActiveProcessDelete( )
{
  this->m_ActiveProcess = NULL;
}

namespace
{
bool rm_pred( const itk::simple::Command *cmd, const std::pair<EventEnum, Command*> &i)
{
  return cmd == i.second;
}
}

void ProcessObject::onCommandDelete(const itk::simple::Command *cmd) throw()
{
  // remove all uses of command
  using namespace std::tr1::placeholders;
  m_Commands.remove_if(std::tr1::bind(rm_pred,cmd,_1));
}


} // end namespace simple
} // end namespace itk
