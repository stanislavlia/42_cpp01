
#include "Replacer.hpp"



void	replace_pattern(std::string& str,
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
	
}


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Incorrect number of args" << std::endl;
		return 1;
	}
	std::string input_filename = argv[1];
	std::string to_replace = argv[2];
	std::string new_token = argv[3];
	Replacer replacer;

	replacer.replace(input_filename, to_replace, new_token);
	return 0;
};


