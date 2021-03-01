#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) 
{
	this->_HitPoints = 60;
	this->_MaxHitPoints = 60;
	this->_EnergyPoints = 120;
	this->_MaxEnergyPoints = 120;
	this->_MeleeAttackDamage = 60;
	this->_RangedAttackDamage = 5;
	this->_ArmorDamageReduction = 0;

	std::cout << "The CL4P-TP " << this->_Name << " is now brainwashed to be a NINJ4-TP..." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & src) : ClapTrap(src)
{
	std::cout << "NINJ4-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{	
	std::cout << "NINJ4-TP named " << this->_Name << " died, RIP" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->_Name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->_Name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & target)
{
	std::cout << this->_Name << " is way to fast for a simple FR4G-TP like " << target.getName() << ", it mmakes 42 HP of damage" << std::endl;
	target.takeDamage(42);
}

void NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	std::cout << this->_Name << " is way to fast for a simple SC4V-TP like " << target.getName() << ", it makes 42 HP of damage" << std::endl;
	target.takeDamage(42);
}
void NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	std::cout << "Only another NINJ4-TP as " << target.getName() << " is as fast as " << this->_Name << ", it failed to attack him and hurt itself" << std::endl;
	this->takeDamage(42);
}


NinjaTrap & NinjaTrap::operator=(const NinjaTrap & rhs)
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
	std::cout << "This NinjaTrap is now a perfect copy of " << this->_Name << "... Are you proud of you ?" << std::endl;
	return (*this);
}
