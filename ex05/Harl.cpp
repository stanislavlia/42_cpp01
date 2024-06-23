#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG: ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
};

void Harl::info()
{
    std::cout << "INFO: ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning()
{
    std::cout << "WARNING: ";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error()
{
    std::cout << "ERROR: ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};


void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    MemberFunctionPointer functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
            (this->*functions[i])(); 
    }

};