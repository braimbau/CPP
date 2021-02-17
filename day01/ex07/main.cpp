#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **ag)
{
	if (ac < 4 || ac > 4)
	{
		std::cout << "Need three arguments : file to_replace replace_by" <<std::endl;
		return (1);
	}
	size_t index;
	std::ifstream ifs(ag[1]);
	std::fstream ofs;
	ofs.open(std::string(ag[1]).append(".replace"), std::ios::out);
	if (ifs.fail())
		std::cout << "Can't open the file: " << ag[1] << std::endl;
	if (ofs.fail())
		std::cout << "Can't create the file: " << ag[1] << ".replace" << std::endl;
	std::string str;
	while (	std::getline(ifs, str))
	{
		index = str.find(ag[2]);
		while (index != std::string::npos)
		{
			str.replace(index,4, ag[3]);
			index = str.find(ag[2], index + 1);
		}
		ofs << str << std::endl;
	}
}
