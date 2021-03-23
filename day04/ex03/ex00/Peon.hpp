#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
			Peon(void);
			Peon(std::string name);
			Peon(const Peon & src);
			~Peon();

			Peon &	operator=(const Peon & rhs);
			void getPolymorphed(void) const;

	private:
};

#endif
