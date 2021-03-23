#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

int main()
{
	SuperMutant *sm = new SuperMutant();
	RadScorpion *rs = new RadScorpion();
	Character *me = new Character("Me");
	PlasmaRifle pr;
	PowerFist pf;

	std::cout << *me << std::endl;
	me->attack(sm);

	std::cout << "==========================" << std::endl;

	me->equip(&pf);
	std::cout << *me << std::endl;
	me->attack(sm);

	std::cout << "==========================" << std::endl;

	me->equip(&pr);
	std::cout << *me << std::endl;
	me->attack(sm);

	std::cout << "==========================" << std::endl;

	std::cout << *me << std::endl;
	me->recoverAP();
	std::cout << *me << std::endl;

	std::cout << "==========================" << std::endl;

	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);

	std::cout << "==========================" << std::endl;

	me->attack(rs);
	me->attack(rs);

	std::cout << "==========================" << std::endl;
	
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me << std::endl;

	std::cout << "==========================" << std::endl;

	me->attack(rs);
	me->attack(rs);
	me->attack(rs);
	me->attack(rs);
	me->attack(rs);
	me->attack(rs);
	me->attack(rs);
	me->attack(rs);

	std::cout << "==========================" << std::endl;
	
	std::cout << *me << std::endl;
	delete me;
}
