#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap & src);
			virtual	~ClapTrap();

			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			std::string getName(void);
			
			ClapTrap &	operator=(const ClapTrap & rhs);

	protected:
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
