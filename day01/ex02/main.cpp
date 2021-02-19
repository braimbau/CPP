#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

void	randomChump()
{
	Zombie	z;

	std::string tab[39] = {"Jean-Baptiste", "Jean-Bernard", "Jean-Briac", "Jean-Charles", "Jean-Claude", "Jean-Christophe", "Jean-Daniel", "Jean-David", "Jean-Denis", "Jean-Edouard", "Jean-Emmanuel", "Jean-Eudes", "Jean-Fabien", "Jean-François", "Jean-Gabriel", "Jean-Georges", "Jean-Hugues", "Jean-Jacques", "Jean-Jean", "Jean-Laurent", "Jean-Louis", "Jean-Loup", "Jean-Luc", "Jean-Marc", "Jean-Marie", "Jean-Mathieu", "Jean-Maurice", "Jean-Médéric", "Jean-Micheli", "Jean-Nicolas", "Jean-Paul", "Jean-Philippe", "Jean-Pierre", "Jean-René", "Jean-Régis", "Jean-Sébastien", "Jean-Simon", "Jean-Yann", "Jean-Yves"};
	z.setType("Stalker");
	z.setName(tab[rand() % 39]);
	z.advert();
}

int		main()
{
	srand(time(NULL));

	ZombieEvent ze;
	Zombie *z;

	randomChump();
	std::cout << std::endl;

	ze.setZombieType("Runner");

	randomChump();

	std::cout << std::endl;
	z = ze.newZombie("Jean-Kevin");
	z->advert();
	delete z;
}


