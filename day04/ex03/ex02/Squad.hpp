#ifndef SQUAD
# define SQUAD

# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(const Squad &rhs);
		virtual ~Squad();

		Squad			&operator=(const Squad & rhs);
		int				getCount() const;
		ISpaceMarine	*getUnit(int unit) const;
		 int			push(ISpaceMarine *unit);

	private:
	
		int				_count;
		ISpaceMarine	**_unit;
};

#endif