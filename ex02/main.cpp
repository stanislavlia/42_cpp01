#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Memory adress of string   : " << &string << std::endl;
    std::cout << "Memory adress of stringPTR: " << &stringPTR << std::endl;
    std::cout << "Memory adress of stringREF: " << &string << std::endl;

    
    std::cout << "Value of string           : " << string << std::endl;
    std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF: " << string << std::endl;


    return 0;
};