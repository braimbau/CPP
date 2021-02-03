#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

int main()
{
	std::string str;
	std::string val;
	Contact tab[8];
	int i = 0;

	while (1)
	{
		std::cout << "Enter input : ";
		std::getline(std::cin, str);
		if (str.compare("EXIT") == 0)
			return (0);
		else if (str.compare("ADD") == 0)
		{
			if (i < 8)
			{
				tab[i].set_contact();
				i++;
			}
			else
				std::cout << "max capacity reached" << std::endl;
		}
		else if (str.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "No contacts" << std::endl;
			else
			{
				std::cout << "     INDEX|    PRENOM|       NOM|    PSEUDO" << std::endl;
				for (int x = 0; x < i; x++)
				{
					std::cout << std::setfill(' ') << std::setw(10) << x << "|";
					val = tab[x].first_name;
					if (val.size() > 10)
					{
						val.resize(9);
						val.append(".");
					}
					std::cout << std::setfill(' ') << std::setw(10) << val << "|";
					val = tab[x].last_name;
					if (val.size() > 10)
					{
						val.resize(9);
						val.append(".");
					}
					std::cout << std::setfill(' ') << std::setw(10) << val << "|";
					val = tab[x].nickname;
					if (val.size() > 10)
					{
						val.resize(9);
						val.append(".");
					}
					std::cout << std::setfill(' ') << std::setw(10) << val << "|" << std::endl;

				}
				std::cout << "Select index : ";
				std::getline(std::cin, val);
				if (val.length() == 1 && isdigit(val[0]) && stoi(val) < i)
					tab[stoi(val)].display_contact();
				else
					std::cout << "Invalid index" << std::endl;
			}
		
		}
	}
}
