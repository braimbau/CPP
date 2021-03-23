#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter 
{
	public:

		Character(void);
		Character(std::string name);
		Character(const Character & src);
		virtual	~Character();

		Character & operator=(const Character & rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:

		AMateria *_materia[4];
		std::string _name;
};

#endif
