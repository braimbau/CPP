#include "DeathAngels.hpp"

DeathAngel::DeathAngel() : ISpaceMarine() { 
    std::cout << "We have purpose" << std::endl;
}

DeathAngel::~DeathAngel() {
     std::cout << "Without the Death, there can be no sacrifice" << std::endl;
}

ISpaceMarine    *DeathAngel::clone() const {
    return (new DeathAngel(*this));
}

DeathAngel::DeathAngel(const DeathAngel & rhs)
{
	(void)rhs;
	std::cout << "We have purpose" << std::endl;
}

void DeathAngel::battleCry() const {
    std::cout << "The lives of millions, and the honour of our Chapter, hang in the balance brothers. Failure is not an option." << std::endl;
}

void DeathAngel::rangedAttack() const {
    std::cout << "While the enemies of the Emperor still draw breath, there can be no peace." << std::endl;
}

void DeathAngel::meleeAttack() const {
    std::cout << "Come you aliens, show me what passes for fury amongst your misbegotten kind!" << std::endl;
}
