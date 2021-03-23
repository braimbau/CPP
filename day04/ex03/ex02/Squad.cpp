#include "Squad.hpp"

Squad::Squad(): _count(0), _unit(NULL) {    
}

Squad::Squad(Squad const & rhs)
{
	_count = rhs._count;
	_unit = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_unit[i] = rhs._unit[i]->clone();
}

Squad::~Squad() {

	if (_unit)
	{
		for (int i = 0; i < _count; i++)
			delete _unit[i];
		delete[] _unit;
	}
}

Squad		&Squad::operator=(const Squad &rhs) {
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	delete[] _unit;
	_count = rhs._count;
	_unit = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_unit[i] = rhs._unit[i]->clone();
	return *this;
}

int		Squad::getCount() const {
	return _count;
}

ISpaceMarine	*Squad::getUnit(int unit) const {
	if (_count > 0 && unit < _count && unit >= 0)
		return _unit[unit];
	return NULL;
}

int		Squad::push(ISpaceMarine *unit) {

	if (!unit)
		return 1;
	if (!_unit)
	{
		_unit = new ISpaceMarine*[1];
		_unit[0] = unit;
		_count = 1;
	}
	else
	{
		for (int i = 0; i < _count; i++)
		{
			if (_unit[i] == unit)
			{
				std::cout << "Unit already in Squad" << std::endl;
				return 1;
			}
		}
		ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			tmp[i] = _unit[i];
		delete[] _unit;
		tmp[_count] = unit;
		_unit = tmp;
		_count++;
	}
	return 0;
}
