#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
	public:
			Pony(std::string name_, std::string color_);
			~Pony(void);

			std::string getName() const;
			std::string getColor() const;
			void setColor(std::string color);

	private:
			std::string name;
			std::string color;
};

#endif	
