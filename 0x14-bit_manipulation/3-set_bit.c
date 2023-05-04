#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to bit literal
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success or -1 if erroe occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
		return (1);
}
