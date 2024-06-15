#include "Zombie.hpp"

Zombie::Zombie()
{

};

Zombie::Zombie(std::string name)
{
    this->name = name;
};


Zombie::~Zombie()
{
    std::cout << this->name << ": has been destroyed..." << std::endl;
};

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName(std::string new_name)
{
    this->name = new_name;
};