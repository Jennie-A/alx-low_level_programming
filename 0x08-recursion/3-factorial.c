#include "main.h"

/**
 * factorial - the function returns the factorial of a number
 * @n: integer
 * if n is lower than 0, return -1 to indicate error
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		(n == 0)
		return (1);
	}
	return (n * factorial(n - 1));
}
