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
				if (tab[i].set_contact())
					std::cout << "Warning : Empty contact" << std::endl;
				else
					i++;
			}
			else
				std::cout << "Error : max capacity reached" << std::endl;
		}
		else if (str.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "Error : No contacts" << std::endl;
			else
			{
				std::cout << "     INDEX|    PRENOM|       NOM|    PSEUDO" << std::endl;
				for (int x = 0; x < i; x++)
				{
					std::cout << std::setfill(' ') << std::setw(10) << x << "|";
					val = tab[x].get_first_name();
					if (val.size() > 10)
					{
						val.resize(9);
						val.append(".");
					}
					std::cout << std::setfill(' ') << std::setw(10) << val << "|";
					val = tab[x].get_last_name();
					if (val.size() > 10)
					{
						val.resize(9);
						val.append(".");
					}
					std::cout << std::setfill(' ') << std::setw(10) << val << "|";
					val = tab[x].get_nickname();
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
					std::cout << "Error : Invalid index" << std::endl;
			}
		
		}
	}
}
