#include "main.h"

/**
 * binary_to_uint - the function convert a binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 * Return: converted number or 0
 * if string has one or more chars in b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b != '0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = (i << 1) + (*b - '0');
		b++;
	}

	return (i);
}










