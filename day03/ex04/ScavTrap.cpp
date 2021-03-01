#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 15;
	this->_ArmorDamageReduction = 3;

	std::cout << "The CL4P-TP " << this->_Name << " is now brainwashed to be a SC4V-TP..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	std::cout << "SC4V-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

ScavTrap::~ScavTrap(void)
{	
	std::cout << "SC4V-TP named " << this->_Name << " died, RIP" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_Name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_Name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage" << std::endl;
}

void ScavTrap::challengeNewComer(std::string const & target)
{
	if (this->_EnergyPoints >= 25)
	{
		std::string attacks []  = {
		"See someone at the bocal before 9pm",
		"Found something that works on the intra",
		"find a working apple mouse in e1",
		"understand the XP system",
		"speak english in global channel" };
		std::cout << this->_Name << " challenge " << target << " to " << attacks[((std::rand()) % 5)] << ", he doesn't have any chance..." << std::endl;
		this->_EnergyPoints -= 25;
	}
	else
		std::cout << this->_Name << " is too tired to challenge " << target << ", so I guess he can pass, maybe..." << std::endl;
}


ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_MaxHitPoints = rhs._MaxHitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_MaxEnergyPoints = rhs._MaxEnergyPoints;
	this->_Level = rhs._Level;
	this->_MeleeAttackDamage = rhs._MeleeAttackDamage;
	this->_RangedAttackDamage = rhs._RangedAttackDamage;
	this->_ArmorDamageReduction = rhs._ArmorDamageReduction;
	std::cout << "This ScavTrap is now a perfect copy of " << this->_Name << "... Are you proud of you ?" << std::endl;
	return (*this);
}
