#include "HumanB.hpp"

HumanB::HumanB()
{

};

HumanB::HumanB(std::string name)
{
	this->name = name;
};

void	HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon& new_weapon)
{
	weapon = &new_weapon;
}

