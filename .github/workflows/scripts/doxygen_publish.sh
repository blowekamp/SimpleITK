set -euxo pipefail

git config --global user.email "simpleitk_github_io@itk.org"
git config --global user.name "Azure Release Agent for SimpleITK.github.io"

umask 077
temp_file=$(mktemp)
trap "{ rm -f $temp_file; }" EXIT

# Generated with cat ~/.ssh/id_simpleitk_github_io | openssl base64 | tr -d '\n'
builtin echo "$(SIMPLEITK_GITHUB_IO_SSH_KEY)" | openssl base64 -A -d > ${temp_file}

export GIT_SSH_COMMAND="ssh -i ${temp_file}"

git clone git@github.com:SimpleITK/SimpleITK.github.io.git

cd SimpleITK.github.io

doxygen_path="doxygen/latest"

git rm -rf ${doxygen_path}
mkdir -p ${doxygen_path}

tar -zxvf ${SYSTEM_DEFAULTWORKINGDIRECTORY}/${RELEASE_PRIMARYARTIFACTSOURCEALIAS}/Doxygen/SimpleITKDoxygen-*.tar.gz -C ${doxygen_path}

git add ${doxygen_path}

git commit -m 'Doxygen latest updated

built from $(Build.SourceVersion)'

git push origin HEAD
