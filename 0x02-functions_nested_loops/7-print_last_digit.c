#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @i: the integer being checked
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int b;

	if (i < 0)
	i = -i;

	b = i % 10;

	(b < 10)
	b = -b;

	_putchar('b + '0');

	return (b);
}
