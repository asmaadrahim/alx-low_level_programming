#include"main.h"
/**
 * _memcpy - function
 *
 * @src: pointer
 * @dest: pointer
 * @n: counter
 * Return: (s)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}
