#include "main.h"

/**
 * print_line - the function draws a straight line
 * @n: number of time the character should be printed
 *
 * Description: the line with a \n
 * if n is 0 or less the function should print only \n
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
}
