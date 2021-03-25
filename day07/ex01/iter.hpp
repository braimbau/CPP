#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T* tab, int len, void (*fonct)(const T &))
{
	for (int i = 0; i < len; i++)
		fonct(tab[i]);
}

#endif
