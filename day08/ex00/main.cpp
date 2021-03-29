#include "template.hpp"
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
	std::list<int> lst1;

	int myints[] = {16,2,5,77,29};
	std::list<int> lst (myints, myints + sizeof(myints) / sizeof(int) );
	std::list<int>::iterator ret;
	std::list<int> lst2;

	ret = easyfind<std::list <int> >(lst, 3);
	if (ret != lst.end())
		std::cout << *ret <<std::endl;
	else
		std::cout << "no result" << std::endl;


	ret = easyfind<std::list <int> >(lst, 29);
	if (ret != lst.end())
		std::cout << *ret <<std::endl;
	else
		std::cout << "no result" << std::endl;


	ret = easyfind<std::list <int> >(lst2, -42);
	if (ret != lst2.end())
		std::cout << (ret == lst.end()) <<std::endl;
	else
		std::cout << "no result" << std::endl;

}
