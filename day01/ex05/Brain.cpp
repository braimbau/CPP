#include "Brain.hpp"
#include <sstream>

Brain::Brain(void){};

Brain::~Brain(){};

std::string Brain::identifier(void) const
{
	std::string str;
	std::stringstream sstream;

	sstream << this;
	str = sstream.str();
	return (str);
}
