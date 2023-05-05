#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to flip to get from one number to another * @n: unsigned integer
 * @m: unsigned integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbering = 0;
	unsigned long int xor_value = n ^ m;
	unsigned long int i;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
		numbering = numbering + ((xor_value >> i) & 1);

	return (numbering);
}
