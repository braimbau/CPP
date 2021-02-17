#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void){}

ZombieEvent::~ZombieEvent(void){}

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
