#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @i: the integer being checked
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int b = i % 10;

	if (i < 0)
		b *= -1;
	_putchar(b + '0');

	return (b);
}
