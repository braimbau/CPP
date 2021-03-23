#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
	public:
			NinjaTrap(std::string name);
			NinjaTrap(const NinjaTrap & src);
			virtual	~NinjaTrap();

			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			void ninjaShoebox(FragTrap & target);
			void ninjaShoebox(ScavTrap & target);
			void ninjaShoebox(NinjaTrap & target);
			
			NinjaTrap &	operator=(const NinjaTrap & rhs);
};

#endif
