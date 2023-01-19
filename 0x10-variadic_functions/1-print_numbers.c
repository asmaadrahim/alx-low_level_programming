#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - fn
 * @separator: sign
 * @n: arg
 * @...: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int indicator;

	va_start(num, n);

	for (indicator = 0; indicator < n; indicator++)
	{
		printf("%d", va_arg(num, int));
		if (indicator != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
