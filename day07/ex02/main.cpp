#include "Array.tpp"
#include <iostream>

int	main(void)
{
	std::cout << "Array of Int:"<< std::endl;
	Array<int> b(5);

	std::cout << "Size of b: " << b.size() << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i + 1;
	std::cout << "Values of b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	try
	{
		std::cout << b[8] << " ";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Values of c, copy of b: ";
	Array<int> c(b);
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	std::cout << "Values of d, equal of b: ";
	Array<int> d = b;
	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	std::cout << std::endl << "Array of Float:"<< std::endl;
	Array<float> fl(5);
	fl[0] = 18.67;
	fl[1] = 43;
	fl[2] = 169.09;
	fl[3] = 10.08;
	fl[4] = 123.4567;
	for (unsigned int i = 0; i < fl.size(); i++)
		std::cout << fl[i] << " ";
	std::cout << std::endl;

	std::cout << "Array of String:"<< std::endl;
	Array<std::string> str(4);
	str[0] = "Hello";
	str[1] = " ";
	str[2] = "World";
	str[3] = "!";
	for (unsigned int i = 0; i < str.size(); i++)
		std::cout << str[i];
	std::cout << std::endl;

	Array<std::string> str2 = str;
	for (unsigned int i = 0; i < str2.size(); i++)
		std::cout << str2[i];
	std::cout << std::endl;

	std::cout << std::endl << "Array of Char:"<< std::endl;
	Array<char> ch(3);
	ch[0] = 'A';
	ch[1] = 'B';
	ch[2] = 'C';
	for (unsigned int i = 0; i < ch.size(); i++)
		std::cout << ch[i] << " ";
	std::cout << std::endl;

	std::cout << std::endl << "Array of nothing:"<< std::endl;
	Array<float> nothing;
	try
	{
		std::cout << nothing[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
