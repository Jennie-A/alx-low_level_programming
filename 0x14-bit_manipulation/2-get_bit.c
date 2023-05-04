#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the index starting from 0 of bit i want to get
 * Return: index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (n >> index) & 1;
}
