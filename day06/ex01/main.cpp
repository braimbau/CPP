#include <iostream>
#include "data.hpp"

void * serialize(void)
{
	std::string	alphaNum("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	std::srand(time(NULL));

	std::string *s1 = new std::string();
	for (int i = 0; i < 20; i++)
		*s1 += alphaNum[rand() % alphaNum.length()];
	std::string *s2 = new std::string();
	for (int i = 0; i < 20; i++)
		*s2 += alphaNum[rand() % alphaNum.length()];
	int i = rand() % 10000;

	struct Data *d = new struct Data;
	d->s1 = s1;
	d->i = i;
	d->s2 = s2;

	std::cout << d->s1 << " = " << *(d->s1) << std::endl;
	std::cout << d->i << std::endl;
	std::cout << d->s2 << " = " << *(d->s2) << std::endl;

	void * serialized_data = reinterpret_cast<void *>(d);
	return (serialized_data);
}

Data * deserialize(void * raw)
{
	struct Data *d = reinterpret_cast<struct Data *>(raw);
	return (d);
}

int main()
{
	void *raw = serialize();

	std::cout << "====================================" << std::endl;

	struct Data *d = deserialize(raw);
	std::cout << d->s1 << " = " << *(d->s1) << std::endl;
	std::cout << d->i << std::endl;
	std::cout << d->s2 << " = " << *(d->s2) << std::endl;
	delete d->s1;
	delete d->s2;
	delete d;
}
