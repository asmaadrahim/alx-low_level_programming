#include <stdio.h>
#include <stdlib.h>
/**
 * main - fn
 * @argc: arg
 * @argv: arr
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byt, var;
	char *arr;
		if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
		byt = atoi(argv[1]);
		if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
		arr = (char *)main;
		for (var = 0; var < byt; var++)
	{
		if (var == byt - 1)
		{
			printf("%02hhx\n", arr[var]);
			break;
		}
		printf("%02hhx ", arr[var]);
	}
	return (0);
}

