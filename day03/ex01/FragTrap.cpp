#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _Name(name), _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100),
							_Level(1), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{
	std::cout << "FR4G-TP named " << this->_Name << " is... borned, I guess" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src)
{
	*this = src;	
	std::cout << "FR4G-TP named " << this->_Name << " have been succesfully cloned, yeah..." << std::endl;
}

FragTrap::~FragTrap(void)
{	
	std::cout << "FR4G-TP named " << this->_Name << " died, RIP" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->_ArmorDamageReduction)
		std::cout << "FR4G-TP " << this->_Name << " doesn't care of that attack, so do I" << std::endl;
	else if (amount - this->_ArmorDamageReduction > this->_HitPoints)
	{	
		this->_HitPoints = 0;
		std::cout << "FR4G-TP " << this->_Name << " doesn't have any life left, it mum will be so sad... If it got one " << std::endl;
	}
	else
	{
		this->_HitPoints -= amount - this->_ArmorDamageReduction;
		std::cout << "Be carrefull, you've hurt " << this->_Name << ", he lost " << amount - this->_ArmorDamageReduction << " HP..." << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
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
