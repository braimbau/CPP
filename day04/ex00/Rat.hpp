#ifndef RAT_HPP
# define RAT_HPP

#include "Victim.hpp"

class Rat : public Victim
{
	public:
			Rat(void);
			Rat(std::string name);
			Rat(const Rat & src);
			virtual	~Rat();

			Rat &	operator=(const Rat & rhs);
			void getPolymorphed(void) const;
	private:
};

#endif
