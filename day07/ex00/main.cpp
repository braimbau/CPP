#include "Whatever.hpp"
#include "Awesome.hpp"
#include <iostream>
#include <string>

int main()
{
	int a = 42;
	int b = 13;

	std::cout << "a = " << a << " | b = " << b << "| max = " << max(a, b) << "| min = " << min(a, b)  <<  std::endl;
	swap(a, b);
	std::cout << "a = " << a << " | b = " << b << "| max = " << max(a, b) << "| min = " << min(a, b)  <<  std::endl;

	std::cout << "===============================" << std::endl;

	std::string s = "I'm the first one";
	std::string t = "I'm the second one";

	std::cout << "s = " << s << " | t = " << t << "| max = " << max(s, t) << "| min = " << min(s, t)  <<  std::endl;
	swap(s, t);
	std::cout << "s = " << s << " | t = " << t << "| max = " << max(s, t) << "| min = " << min(s, t)  <<  std::endl;

	std::cout << "===============================" << std::endl;

	Awesome o(21);
	Awesome j(42);

	std::cout << "j = " << j << " | o = " << o << "| max = " << max(j, o) << "| min = " << min(j, o)  <<  std::endl;
	swap(j, o);
	std::cout << "j = " << j << " | o = " << o << "| max = " << max(j, o) << "| min = " << min(j, o)  <<  std::endl;

}
