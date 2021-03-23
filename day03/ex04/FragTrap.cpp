#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
	this->_MeleeAttackDamage = 30;
	this->_RangedAttackDamage = 20;
	this->_ArmorDamageReduction = 5;
	this->_Level = 1;
	std::cout << "The CL4P-TP " << this->_Name << " is now brainwashed to be a FR4G-TP..." << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	std::cout << "FR4G-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

FragTrap::~FragTrap(void)
{	
	std::cout << "FR4G-TP named " << this->_Name << " died, RIP" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
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
	std::cout << "This FragTrap is now a perfect copy of " << this->_Name << "... Are you proud of you ?" << std::endl;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_EnergyPoints >= 25)
	{
		std::string attacks []  = {
		"Clap-In-The-Box !",
		"Gun Wizard !",
		"Meatsplosion!",
		"Pirate Ship Mode !",
		"One Shot Wonder !",
		"Laser Inferno !",
		"Miniontrap !",
		"Meat Unicycle !",
		"Funzerker !",
		"Mechromagician !",
		"Shhhh... Trap !",
		"Blight Bot !",
		"Rubber Ducky !",
		"Senseless Sacrifice !" };
		std::cout << this->_Name << " attacks " << target << " with " << attacks[((std::rand()) % 14)] << "... So much pointless violence.." << std::endl;
		this->_EnergyPoints -= 25;
	}
	else
		std::cout << this->_Name << " doesn't have enought energy to perform your useless attack, that's... unfortunate..." << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4P-TP " << this->_Name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4P-TP " << this->_Name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage" << std::endl;
}
