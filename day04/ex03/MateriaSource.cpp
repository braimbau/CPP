#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4 ; i++)
		_stockage[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4  ; i++)
	{
		if (_stockage[i])
			delete _stockage[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource & src) {
	*this = src;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) {
	for(int i = 0; i < 4 && rhs._stockage[i]; i++)
	{
		if (_stockage[i])
			delete _stockage[i];
		_stockage[i] = rhs._stockage[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria * m) {
	for (int i = 0; i < 4; i++)
	{
		if (_stockage[i] == NULL)
		{
			_stockage[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4 ; i++)
	{
		if (_stockage[i] && type == _stockage[i]->getType())
			return _stockage[i]->clone();
	}
	return NULL;
}
