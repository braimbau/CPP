#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_EnergyPoints = NinjaTrap::_EnergyPoints;
	this->_MaxEnergyPoints = NinjaTrap::_MaxEnergyPoints;
	this->_MeleeAttackDamage = NinjaTrap::_MeleeAttackDamage;
	std::cout << "The CL4P-TP " << this->_Name << " is now brainwashed to be a SUPER-TP..." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & src) : ClapTrap(src),  FragTrap(src), NinjaTrap(src)
{
	std::cout << "SUPER-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

SuperTrap::~SuperTrap(void)
{	
	std::cout << "SUPER-TP named " << this->_Name << " died, RIP" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap & rhs)
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
	std::cout << "This SuperTrap is now a perfect copy of " << this->_Name << "... Are you proud of you ?" << std::endl;
	return (*this);
}
