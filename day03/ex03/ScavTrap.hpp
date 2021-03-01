#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap & src);
			virtual	~ScavTrap();

			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			void challengeNewComer(std::string const & target);
			
			ScavTrap &	operator=(const ScavTrap & rhs);
};

#endif
