#include"main.h"
/**
 * _memset - function
 *
 * @s:pointer
 * @b: constant
 * @n: counter
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}
