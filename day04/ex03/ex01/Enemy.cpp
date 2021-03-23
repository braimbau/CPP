#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _Type(type) {}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy const & src)
{
	this->_HP = src._HP;
	this->_Type = src._Type;
}

Enemy &	Enemy::operator=(const Enemy & rhs)
{
	*this = rhs;
	return (*this);
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->_HP -= damage;
	if (this->_HP < 0)
		this->_HP = 0;
}

int Enemy::getHP(void) const
{
	return (this->_HP);
}

std::string const Enemy::getType(void) const
{
	return (this->_Type);
}
