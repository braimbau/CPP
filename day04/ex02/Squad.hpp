#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
			Squad(void);
			Squad(const Squad & src);
			virtual	~Squad();

			Squad &	operator=(const Squad & rhs);
	private:
			int				_Count;
			ISpaceMarine	**_unit;


};

#endif
