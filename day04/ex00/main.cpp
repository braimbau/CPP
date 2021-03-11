#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Rat.hpp"

int main()
{
	Sorcerer ron = Sorcerer("Ron", "Le Roux");
	Victim teigne = Victim("Miss Teigne");
	Peon leon = Peon("Leon");
	Rat croutard = Rat("croutard");

	std::cout << ron << std::endl << teigne << std::endl << leon << std::endl;
	ron.polymorph(teigne);
	ron.polymorph(leon);
	ron.polymorph(croutard);
}
