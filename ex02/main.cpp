#include <typeinfo>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory adress of string   : " << &str << std::endl;
    std::cout << "Memory adress of stringPTR: " << &stringPTR << std::endl;
    std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;

    
    std::cout << "Value of string           : " << str << std::endl;
    std::cout << "Value pointed by stringPTR: " << stringPTR << std::endl;
    std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

    return 0;
};
