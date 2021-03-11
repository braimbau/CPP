#include "Squad.hpp"

Squad::Squad(void) _Count(0), _Unit(NULL) {};

Squad::~Squad()
{
	for (int i = 0; i < this->_Count; i++)
		delete this->unit[i];
	delete [] this->_Unit;
}

ISpaceMarine *Squad::getUnit(int n)
{
	if (n < 0 || n >= this->_Count)
		return (NULL);
	else
		return (this->_Unit[n]);
}

Squad		&Squad::operator=(const Squad &rhs)
{
    _count = rhs._count;
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	delete[] _unit;
	_unit = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_unit[i] = rhs._unit[i]->clone();
	return *this;
}

int Squad::push(ISpaceMarine *unit)
{
	int i = 0;

	if (unit == NULL)
		return (this->_Count);
	while (i < this->_Count)
	{
		if (this->unit[i] == unit)
			return (this->_Count);
		i++;
	}
	if (this->_Count == 0)
	{
		this->_Unit = new ISpaceMarine *[1];
		this->_Unit[0] = unit;
		this->_Count = 1;
	}
	else
	{
		ISpaceMarine **tmp = new ISpaceMarine *[this->_Count + 1];
		i = 0;
		while (i < this->_Count)
			tmp[i] = this->_Unit[i];
		tmp[i] = unit;
		delete [] this->_Unit;
		this->unit = tmp;
		this->_Count++;
	}
	return (this->_Count);
}
