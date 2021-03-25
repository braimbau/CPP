#include "iter.hpp"
#include "Awesome.hpp"
#include <iostream>
#include <string>

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main(void)
{
	{
		const int tab[] = { 0, 1, 2, 3, 4 };
		const Awesome tab2[5] = {0, 1 ,2, 3 ,4 };

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
}
