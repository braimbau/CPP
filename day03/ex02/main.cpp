#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap k = FragTrap("Kevin");
	FragTrap k7 = FragTrap(k);
	FragTrap h = FragTrap("Henry");
	k.meleeAttack("Mechant");
	k.rangedAttack("Mechant");
	k.vaulthunter_dot_exe("Mechant");
	k.vaulthunter_dot_exe("Mechant");
	k.vaulthunter_dot_exe("Mechant");
	k.vaulthunter_dot_exe("Mechant");
	k.vaulthunter_dot_exe("Mechant");
	k.beRepaired(5);
	k.takeDamage(3);
	k.takeDamage(34);
	k.takeDamage(2000);
	k.beRepaired(42);
	k.beRepaired(200);
	k.beRepaired(1);
	k7.vaulthunter_dot_exe("Messant");
	std::cout << "=====================" << std::endl;
	ScavTrap s = ScavTrap("Gerard");
	s.meleeAttack("Grand Mechant");
	s.rangedAttack("Grand Mechant");
	s.challengeNewComer("Grand Mechant");
	s.challengeNewComer("Grand Mechant");
	s.challengeNewComer("Grand Mechant");
	s.challengeNewComer("Grand Mechant");
	s.challengeNewComer("Grand Mechant");
	s.beRepaired(5);
	s.takeDamage(3);
	s.takeDamage(34);
	s.takeDamage(2000);
	s.beRepaired(42);
	s.beRepaired(200);
	s.beRepaired(1);
}
