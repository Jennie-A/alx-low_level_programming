#include "main.h"

/**
 * binary_to_uint - the function converts binary to integer
 * *b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if 
 * there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for ( i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 0)
			result = result * 2;
		else if (b[i] == '1')
			result = result * 2 + 1;
		else
			return (0);
	}

	return (result);
}
