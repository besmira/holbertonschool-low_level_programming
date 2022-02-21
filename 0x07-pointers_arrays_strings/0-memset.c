#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of byte
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
