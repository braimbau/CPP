#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(const Character & src)
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}


Character & Character::operator=(const Character & rhs) {

	_name = rhs._name;
	for(int i = 0; i < 4; i++)
	{
		if (rhs._materia[i])
		_materia[i] = rhs._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int index)
{
	_materia[index] = NULL;
}

void Character::use(int index, ICharacter & target)
{
	if (_materia[index])
		_materia[index]->use(target);
}
