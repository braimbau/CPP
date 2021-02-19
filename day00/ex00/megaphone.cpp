#include <iostream>
#include <stdio.h>

int main(int ac, char **ag)
{
	int x = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (x < ac)
		{
			int i = 0;
			while (ag[x][i])
			{
				ag[x][i] = toupper(ag[x][i]);
				i++;
			}
			std::cout << ag[x] << " ";
			x++;
		}
		std::cout << std::endl;
	}
}
