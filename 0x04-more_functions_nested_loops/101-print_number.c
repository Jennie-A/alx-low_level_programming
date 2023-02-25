#include "main.h"

/**
 * print_number - the function prints an integer
 * long is not allowed
 *
 * @n: integer to be printed
 * Description: arrays, ponters and hard-code special values are not allowed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar(n1 % 10) + '0');
}
