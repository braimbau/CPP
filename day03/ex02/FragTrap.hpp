#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
			FragTrap(std::string name);
			FragTrap(const FragTrap & src);
			~FragTrap();

			void vaulthunter_dot_exe(std::string const & target);
			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			
			FragTrap &	operator=(const FragTrap & rhs);
};

#endif
