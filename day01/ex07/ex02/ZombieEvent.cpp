#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
	std::cout << "Construction of event" << std::endl;
	this->type = "Default";
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Destruction of event" << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie * ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->setType(this->type);
	zombie->setName(name);
	return (zombie);
}
