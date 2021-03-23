#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
			Zombie(void);
			~Zombie();

			void advert(void) const;
			void setName(std::string name);
			void setType(std::string type);
			std::string randomName(void);

	private:
			std::string type;
			std::string name;
};

#endif
