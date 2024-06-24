#include "Replacer.hpp"

void Replacer::_replace_pattern_str(std::string& str,
					   std::string old_token,
					    std::string new_token)
{
	std::size_t substr_start = str.find(old_token);

	if (old_token.empty())
		return ;


	while (substr_start != std::string::npos)
	{
		str.erase(substr_start, old_token.length());
		str.insert(substr_start, new_token);
		substr_start = str.find(old_token);
	}
	
};

void Replacer::replace(std::string input_file_path,
                     std::string old_token,
                     std::string new_token)
{
    std::string output_filename = input_file_path + ".replace";
    std::string current_line;

	std::ifstream in_file(input_file_path);

	//Handling file permissions
    if (!in_file.is_open())
    {
        std::cerr << "Error: Cannot open input file for reading" << std::endl;
        return ;
    }
	std::ofstream out_file(output_filename);
    if (!out_file.is_open())
    {
        std::cerr << "Error: Cannot open output file for writing" << std::endl;
        return ;
    }

	//Replace logic
	while (getline(in_file, current_line))
	{
		_replace_pattern_str(current_line, old_token , new_token);
		out_file << current_line << std::endl;
	}

};