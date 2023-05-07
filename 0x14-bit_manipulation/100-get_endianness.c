#include "main.h"

/**
 * get_endianness - the function checks the endianess
 * Return: 0 if big endian, else 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *) &x;

	if (*ptr == 1)
		return (1);/*little endian*/

	else
		return (0);/*big endian*/
}
