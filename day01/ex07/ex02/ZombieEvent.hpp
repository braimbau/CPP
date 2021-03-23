#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>

class ZombieEvent
{
	public:
			ZombieEvent(void);
			~ZombieEvent();

			void setZombieType(std::string type);
			Zombie * newZombie(std::string name);

	private:
			std::string type;

};

#endif
