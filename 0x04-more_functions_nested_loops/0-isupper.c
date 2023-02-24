#include "main.h"

/**
 * _isupper - The function checks for uppercase characters
 * @c: character to check
 * Return: 1 if c is uppercase
 * otherwise, 0
 */
int _isupper(int c)
{
	if (c >= 'A')
		return (1);

	else if (c <= 'Z')
		return (0);
}
