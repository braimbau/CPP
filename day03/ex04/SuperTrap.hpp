#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap & src);
			virtual	~SuperTrap();

			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			
			SuperTrap &	operator=(const SuperTrap & rhs);
};

#endif
