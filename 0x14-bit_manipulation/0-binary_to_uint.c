#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		result <<= 1;
		result += b[i] - '0';
	}

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (result);
}
