#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

{
	int i = 0;
	int j = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	while ( src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}

	dest[i] = '\0';
	return (dest);
}