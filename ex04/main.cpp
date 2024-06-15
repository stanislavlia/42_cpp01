
#include <iostream>
#include <fstream>
#include <string>


int	main()
{
	std::string str = "Hello World! Great to see you!";

	std::string to_replace = "see";

	std::cout << str.find("see") << std::endl;

	str.erase(str.find("see"), str.find("see") + 3);
	str.insert(str.find("see"), "hello");

	std::cout << str << std::endl;

	return (0);
}