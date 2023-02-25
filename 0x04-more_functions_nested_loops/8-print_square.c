#include "main.h"

/**
 * print_square - the function prints a square followed by a new line
 * @size: is the size of the square
 * Description: if size is 0 or less, function prints new line
 * #: used to print square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int m, n;

		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
