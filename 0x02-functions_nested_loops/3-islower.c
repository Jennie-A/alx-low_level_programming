#include "main.h"

/**
 * 3-islower - program checks for lower case character
 * @c: is the character to be checked
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
