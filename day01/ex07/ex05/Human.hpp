#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
			Human(void);
			~Human();

			const Brain& getBrain(void) const;
			std::string identifier(void) const;

	private:
			const Brain brain;
};

#endif
