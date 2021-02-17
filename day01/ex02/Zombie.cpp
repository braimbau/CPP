#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void){};

Zombie::~Zombie(void)
{
	std::cout << "Destruction of zombie : " << this->name << std::endl;
};

void Zombie::advert(void) const
{
	std::cout << this->name << " (" << this->type << ")> Braaaaiiinnnsss..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}
