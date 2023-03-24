#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function returns the sum of it
 * parameters
 * @n: argument size
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_integers;
	int sum = 0;
	unsigned int a;

	va_start(sum_integers, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)

	sum += va_arg(sum_integer, int);

	va_end(sum_integers);

	return (sum);
}
