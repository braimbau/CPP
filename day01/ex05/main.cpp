#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int main()
{
	Human human;

	std::cout << human.identifier() << std::endl;
	std::cout << human.getBrain().identifier() << std::endl;
}
