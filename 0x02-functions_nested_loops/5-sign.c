#include "main.h"

/**
 * print_sign - the program write a function that prints the sign of a number
 * @n: the char to check
 * Return: 1 if n is greater than 0
 * and prints 0 if n is 0
 * and prints -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
