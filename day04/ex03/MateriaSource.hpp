#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();

		MateriaSource	&operator=(const MateriaSource & rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria *_stockage[4];
};

#endif
