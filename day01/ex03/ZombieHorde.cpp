#include "ZombieHorde.hpp"
#include "Zombie.hpp"


ZombieHorde::ZombieHorde(int n_) : n(n_)
{
	srand(time(NULL));
	if (n < 0)
		n = 0;
	this->horde = new Zombie[n];
	for (int x = 0; x < n; x++)
	{
		this->horde[x].setName(horde[x].randomName());
		this->horde[x].setType("Bloater");
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->horde;
};

void ZombieHorde::announce(void)
{
	for (int x = 0; x < this->n; x++)
	{
		this->horde[x].advert();
	}
};
