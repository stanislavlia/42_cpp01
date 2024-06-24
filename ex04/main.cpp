
#include "Replacer.hpp"

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


