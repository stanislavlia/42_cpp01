#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "default";
};

Weapon::Weapon(std::string type)
{
	type = type;
};

const std::string& Weapon::getType() const
{
	return this->type;
};

void	Weapon::setType(std::string new_type)
{	
	this->type = new_type;
};
