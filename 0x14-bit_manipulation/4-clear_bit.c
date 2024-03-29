#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to bits literal
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success or -1 if an error occurs
 */

/**
 * same implementation as the previous "setting value to 1 at a given index
 * the only difference is the introduction of the bitwise operator NOT "~" after shifting the index to the left
 * 1UL is a suffix for unsigned long integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
