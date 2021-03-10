#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
	private:
			std::string _Name;
			int _Damage;
			int _APCost;
			AWeapon(void);
	public:
			AWeapon(std::string const & name, int apcost, int damage);
			virtual	~AWeapon();
			const std::string getName() const;
			int getAPCost() const;
			int getDamage() const;
			virtual void attack() const = 0;
			AWeapon(const AWeapon & src);

			AWeapon &	operator=(const AWeapon & rhs);
};

#endif
