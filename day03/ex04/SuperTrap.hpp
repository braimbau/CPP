#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap & src);
			virtual	~SuperTrap();

			SuperTrap &	operator=(const SuperTrap & rhs);

			using NinjaTrap::meleeAttack;
			using FragTrap::rangedAttack;
};

#endif
