#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer ron = Sorcerer("Ron", "Le Roux");
	Victim teigne = Victim("Miss Teigne");

	std::cout << ron << std::endl << teigne << std::endl;
}
