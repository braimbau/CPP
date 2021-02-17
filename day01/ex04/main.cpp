#include <string>
#include <iostream>

int main()
{
	std::string str;
	std::string *pstr = &str;
	std::string &rstr = str;

	str = "HI THIS IS BRAIN";
	std::cout << *pstr << std::endl;
	std::cout << rstr << std::endl;
}
