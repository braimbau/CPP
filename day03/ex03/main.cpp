#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap k = FragTrap("Kevin");
	ScavTrap g = ScavTrap("Gerard");
	NinjaTrap n = NinjaTrap("Nathan");
	n.ninjaShoebox(k);
	n.ninjaShoebox(g);
	n.ninjaShoebox(n);
}
