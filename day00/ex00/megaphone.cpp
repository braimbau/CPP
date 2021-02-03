#include <iostream>
#include <stdio.h>

int main(int ac, char **ag)
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (ag[1][i])
		{
			ag[1][i] = toupper(ag[1][i]);
			i++;
		}
		std::cout << ag[1] << std::endl;
	}
}
