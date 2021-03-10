#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
			Enemy(void);
			std::string _Type;
			int			_HP;
	public:
			Enemy(int hp, std::string const & type);
			Enemy(const Enemy & src);
			virtual	~Enemy();

			std::string const getType(void) const;
			int	getHP(void) const;
			virtual void takeDamage(int);

			Enemy &	operator=(const Enemy & rhs);
	private:
};

#endif
