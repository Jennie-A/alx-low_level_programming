#include "main.h"

/**
 * _puts_recursion - the function prints a string
 * followed by a new line
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
	}
	else
	{
		_putchar(*s);
		_puts_recursion("++s");
	}
}
