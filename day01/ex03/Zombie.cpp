#include "Zombie.hpp"
#include <iostream>
#include <time.h>

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

std::string Zombie::randomName()
{
	std::string tab[39] = {"Jean-Baptiste", "Jean-Bernard", "Jean-Briac", "Jean-Charles", "Jean-Claude", "Jean-Christophe", "Jean-Daniel", "Jean-David", "Jean-Denis", "Jean-Edouard", "Jean-Emmanuel", "Jean-Eudes", "Jean-Fabien", "Jean-François", "Jean-Gabriel", "Jean-Georges", "Jean-Hugues", "Jean-Jacques", "Jean-Jean", "Jean-Laurent", "Jean-Louis", "Jean-Loup", "Jean-Luc", "Jean-Marc", "Jean-Marie", "Jean-Mathieu", "Jean-Maurice", "Jean-Médéric", "Jean-Michel", "Jean-Nicolas", "Jean-Paul", "Jean-Philippe", "Jean-Pierre", "Jean-René", "Jean-Régis", "Jean-Sébastien", "Jean-Simon", "Jean-Yann", "Jean-Yves"};
	return(tab[rand() % 39]);
}

