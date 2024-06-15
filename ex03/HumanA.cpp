#include "HumanA.hpp"

HumanA::HumanA()
{

};

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = weapon;
};

void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
};

void	HumanA::setWeapon(Weapon& new_weapon)
{
	this->weapon = new_weapon;
}
