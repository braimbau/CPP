#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "DeathAngels.hpp"
#include "Squad.hpp"

int	main(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	ISpaceMarine	*leo = new TacticalMarine;
	ISpaceMarine	*noa = new DeathAngel;

	Squad			*sq0 = new Squad;

	std::cout << std::endl;

	sq0->push(bob);
	sq0->push(jim);
	for (int i = 0; i < sq0->getCount(); i++)
	{
		ISpaceMarine	*cur = sq0->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	Squad		*sq1 = new Squad(*sq0);

	for (int i = 0; i < sq1->getCount(); i++)
	{
		ISpaceMarine	*cur2 = sq1->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	std::cout << sq0 << std::endl;
	std::cout << sq1 << std::endl;

	std::cout << std::endl;

	sq1->push(leo);
	sq1->push(noa);

	for (int i = 0; i < sq1->getCount(); i++)
	{
		ISpaceMarine	*cur2 = sq1->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	
	std::cout << std::endl;

	sq1->push(leo);

	*sq1 = *sq0;

	for (int i = 0; i < sq1->getCount(); i++)
	{
		ISpaceMarine	*cur2 = sq1->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}

	std::cout << std::endl;

	delete sq0;
	delete sq1;

	return (0);
}
