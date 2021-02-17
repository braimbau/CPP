#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name_, std::string color_) : name(name_), color(color_)
{
	std::cout << "Cration of a " << this->color << " pony named " << this->name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Destruction of " << this->name << std::endl;
}

std::string Pony::getName(void) const
{
	return (this->name);
}

std::string Pony::getColor(void) const
{
	return (this->color);
}

void	Pony::setColor(std::string color)
{
	this->color = color;
}
