#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
	public:
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap & src);
			virtual	~ScavTrap();

			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void challengeNewComer(std::string const & target);
			
			ScavTrap &	operator=(const ScavTrap & rhs);

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
