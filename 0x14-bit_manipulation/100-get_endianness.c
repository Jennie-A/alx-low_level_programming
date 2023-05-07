#include "main.h"

/**
 * get_endianness - the function checks the endianess
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *p = (char*) &x;

	if (*p == 1)
		return (1);

	else
		return (0);
}
