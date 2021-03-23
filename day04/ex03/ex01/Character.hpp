#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _Name;
		int	_AP;
		AWeapon *_Weapon;
			
	public:
		Character(std::string const & name);
		~Character();
		Character(const Character & src);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string			getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;

		Character &	operator=(const Character & rhs);
};

		std::ostream & operator<<(std::ostream & os, const Character & rhs);
#endif
