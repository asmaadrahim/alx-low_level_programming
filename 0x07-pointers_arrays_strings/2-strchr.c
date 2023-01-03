#include"main.h"
/**
 * _strchr - function
 *
 * @c: pointer
 * @s: pointer
 * Return: (s)
 */
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != '\0' && s[counter] != c)
	{
		counter++;
	}
	if (s[counter] == c)
	{
		return (&s[counter]);
	}
	return (0);
}
