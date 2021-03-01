#include "FragTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap k = FragTrap("kevin");
	FragTrap k7 = FragTrap(k);
	FragTrap h = FragTrap("Henry");
	k.meleeAttack("mechant");
	k.rangedAttack("mechant");
	k.vaulthunter_dot_exe("mechant");
	k.vaulthunter_dot_exe("mechant");
	k.vaulthunter_dot_exe("mechant");
	k.vaulthunter_dot_exe("mechant");
	k.vaulthunter_dot_exe("mechant");
	k.beRepaired(5);
	k.takeDamage(3);
	k.takeDamage(34);
	k.takeDamage(2000);
	k.beRepaired(42);
	k.beRepaired(200);
	k.beRepaired(1);
	k7.vaulthunter_dot_exe("Messant");
}
