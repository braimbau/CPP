#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap k = FragTrap("Kevin");
	ScavTrap g = ScavTrap("Gerard");
	NinjaTrap n = NinjaTrap("Nathan");
	SuperTrap s = SuperTrap("Sophie");

	n.ninjaShoebox(k);
	n.ninjaShoebox(g);
	n.ninjaShoebox(n);
	s.ninjaShoebox(k);
	s.ninjaShoebox(n);
	s.vaulthunter_dot_exe("mechant");
	s.vaulthunter_dot_exe("mechant");
	s.vaulthunter_dot_exe("mechant");
	s.vaulthunter_dot_exe("mechant");
	s.vaulthunter_dot_exe("mechant");
	s.vaulthunter_dot_exe("mechant");
//	s.meleeAttack("grand mechant");
//	s.rangedAttack("Grand Mechant");
}
