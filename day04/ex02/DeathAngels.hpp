#ifndef DEATH_ANGELS_HPP
# define DEATH_ANGELS_HPP


#include "ISpaceMarine.hpp"

class DeathAngel : public ISpaceMarine
{
	public:
            virtual ISpaceMarine *clone() const;
            void    battleCry() const;
            void    rangedAttack() const;
            void    meleeAttack() const;

            DeathAngel();
            DeathAngel(const DeathAngel & rhs);
            virtual ~DeathAngel();

};

#endif