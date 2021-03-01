#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100),
							_Level(1), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{
	std::cout << "CL4P-TP named " << this->_Name << " is... borned, I guess" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_MaxHitPoints = src._MaxHitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_MaxEnergyPoints = src._MaxEnergyPoints;
	this->_Level = src._Level;
	this->_MeleeAttackDamage = src._MeleeAttackDamage;
	this->_RangedAttackDamage = src._RangedAttackDamage;
	this->_ArmorDamageReduction = src._ArmorDamageReduction;

	std::cout << "CL4P-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

ClapTrap::~ClapTrap(void)
{	
	std::cout << "CL4P-TP named " << this->_Name << " died, RIP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->_ArmorDamageReduction)
		std::cout << "CL4P-TP " << this->_Name << " doesn't care of that attack, so do I" << std::endl;
	else if (amount - this->_ArmorDamageReduction > this->_HitPoints)
	{	
		this->_HitPoints = 0;
		std::cout << "CL4P-TP " << this->_Name << " doesn't have any life left, it mum will be so sad... If it got one " << std::endl;
	}
	else
	{
		this->_HitPoints -= amount - this->_ArmorDamageReduction;
		std::cout << "Be carrefull, you've hurt " << this->_Name << ", he lost " << amount - this->_ArmorDamageReduction << " HP..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_MaxHitPoints - this->_HitPoints)
		amount = this->_MaxHitPoints - this->_HitPoints;
	if (amount)
	{
		this->_HitPoints += amount;
		std::cout << "Woah... You've extended " << this->_Name << "'s miserable existence by healing " << amount << " HP" << std::endl;
	}
	else
		std::cout << this->_Name << " can't take health now.. Stupid human" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return (this->_Name);
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
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
	std::cout << "This ClapTrap is now a perfect copy of " << this->_Name << "... Are you proud of you ?" << std::endl;
	return (*this);
}
