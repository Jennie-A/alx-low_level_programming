#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the index starting from 0 of bit i want to get
 * Return: index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /*checks if index is within range of valid indices else, error of the given data type*/
		return (-1);

	return ((n >> index) & 1); /*if the index is within range n is shifted to the rightmost by 1, bitwise & is then implemented, 1 or 0 is returned*/ 
}
