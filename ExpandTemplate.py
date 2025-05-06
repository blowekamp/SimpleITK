import argparse
import json
from jinja2 import Environment, FileSystemLoader
import os

def expand_template(config_file, template_dir, template_component_dir, template_extension, output_file):
    """
    Expands a template using the provided JSON configuration and Jinja2.

    Args:
        config_file (str): Path to the JSON configuration file.
        template_dir (str): Directory containing the main template files.
        template_component_dir (str): Directory containing additional template components.
        template_extension (str): Extension of the template file.
        output_file (str): Path to the output file to be generated.
    """
    # Load JSON configuration
    with open(config_file, 'r') as f:
        filter_description = json.load(f)

    # Determine the base template filename
    template_base_filename = filter_description.get("template_code_filename", "ImageFilter") + template_extension

    # Load the template
    env = Environment(loader=FileSystemLoader([template_dir, template_component_dir]))
    template = env.get_template(template_base_filename)

    # Render the template with the filter description
    output_content = template.render(filter_description)

    # Write the output to the specified file
    with open(output_file, 'w') as f:
        f.write(output_content)

def main():
    parser = argparse.ArgumentParser(description="Expand a template using a JSON configuration file and Jinja2.")
    parser.add_argument("config_file", help="Path to the JSON configuration file.")
    parser.add_argument("template_dir", help="Directory containing the main template files.")
    parser.add_argument("template_component_dir", help="Directory containing additional template components.")
    parser.add_argument("template_extension", help="Extension of the template file.")
    parser.add_argument("output_file", help="Path to the output file to be generated.")

    args = parser.parse_args()

    expand_template(args.config_file, args.template_dir, args.template_component_dir,
                    args.template_extension, args.output_file)

if __name__ == "__main__":
    main()