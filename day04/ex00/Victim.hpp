#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	public:
			Victim(void);
			Victim(std::string name);
			Victim(const Victim & src);
			~Victim();

			Victim &	operator=(const Victim & rhs);

			std::string getName(void) const;
	private:
			std::string _Name;
};

std::ostream & operator<<(std::ostream & os, const Victim & rhs);

#endif
