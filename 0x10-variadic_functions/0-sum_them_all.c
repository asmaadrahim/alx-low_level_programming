#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fn
 * @n: par
 * @...: var
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int v, summution = 0;

	va_start(ap, n);
	for (v = 0; v < n; v++)
	{
		summution += va_arg(ap, int);
	}
	va_end(ap);
	return (summution);
}
