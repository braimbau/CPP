#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _Name(name), _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50),
							_Level(1), _MeleeAttackDamage(20), _RangedAttackDamage(15), _ArmorDamageReduction(3)
{
	std::cout << "SC4V-TP named " << this->_Name << " is... borned, I guess" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	*this = src;	
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

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->_ArmorDamageReduction)
		std::cout << "SC4V-TP " << this->_Name << " doesn't care of that attack, so do I" << std::endl;
	else if (amount - this->_ArmorDamageReduction > this->_HitPoints)
	{	
		this->_HitPoints = 0;
		std::cout << "SC4V-TP " << this->_Name << " doesn't have any life left, it mum will be so sad... If it got one " << std::endl;
	}
	else
	{
		this->_HitPoints -= amount - this->_ArmorDamageReduction;
		std::cout << "Be carrefull, you've hurt " << this->_Name << ", he lost " << amount - this->_ArmorDamageReduction << " HP..." << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
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
