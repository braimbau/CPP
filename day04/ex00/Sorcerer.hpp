#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer
{
	public:
			Sorcerer(void);
			Sorcerer(std::string name, std::string title);
			Sorcerer(const Sorcerer & src);
			~Sorcerer();

			Sorcerer &	operator=(const Sorcerer & rhs);

			std::string getName(void) const;
			std::string getTitle(void) const;
			
	private:
			std::string _Name;
			std::string _Title;
};

			std::ostream & operator<<(std::ostream & os, const Sorcerer & rhs);

#endif
