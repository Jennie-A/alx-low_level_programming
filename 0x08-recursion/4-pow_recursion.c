#include "main.h"

/**
 * _pow_recursion - the function returns the value of x to the power of y
 * if y, is less than 0, return -1
 * @x: an integer
 * @y: an integer
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	power = x, y;

	if (y < 0)
		return (-1);

	else (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
