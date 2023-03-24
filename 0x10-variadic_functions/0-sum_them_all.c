#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function returns the sum of it
 * parameters
 * @n: argument size
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_integers;
	unsigned int sum;
	unsigned int a;

	va_start(sum_integers, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(sum_integers, unsigned int);
	}
	va_end(sum_integers);

	return (sum);
}
