#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

int main()
{
	SuperMutant *sm = new SuperMutant();
	Character *me = new Character("Me");
	PlasmaRifle pr;
	PowerFist pf;

	std::cout << *me << std::endl;
	me->attack(sm);
	me->equip(&pf);
	me->attack(sm);
	me->equip(&pr);
	me->attack(sm);
	me->recoverAP();
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	std::cout << *me << std::endl;
}
