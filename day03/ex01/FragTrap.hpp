#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	public:
			FragTrap(std::string name);
			FragTrap(const FragTrap & src);
			virtual	~FragTrap();

			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void vaulthunter_dot_exe(std::string const & target);
			
			FragTrap &	operator=(const FragTrap & rhs);

	private:
			int			_HitPoints;
			int			_MaxHitPoints;
			int			_EnergyPoints;
			int			_MaxEnergyPoints;
			int			_Level;
			int			_MeleeAttackDamage;
			int			_RangedAttackDamage;
			int			_ArmorDamageReduction;
			std::string	_Name;
};

#endif
