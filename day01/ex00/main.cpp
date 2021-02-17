#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack(void)
{
	Pony p("caramel", "white");
	std::cout << p.getName() << " plays with pink painting" << std::endl;
	p.setColor("pink");
	std::cout << p.getName() << " is now " << p.getColor() << std::endl;
}

void ponyOnTheHeap(void)
{
	Pony *p = new Pony("nougat", "black");
	std::cout << p->getName() << " plays with purple painting" << std::endl;
	p->setColor("purple");
	std::cout << p->getName() << " is now " << p->getColor() << std::endl;
	delete p;
}

int main()
{
	std::cout << "Call of pony on stack" << std::endl;
	ponyOnTheStack();
	std::cout << "Call of pony on heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "End of program" << std::endl;
}
