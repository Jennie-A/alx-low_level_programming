#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to bit literal
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success or -1 if erroe occurs
 */
/**
 * set bit from 1 value to another, ie, 0 to 1
 * check if indices are within range, if not error
 * *n a variable that holds a number, |= take value on left side and combine with value on right using bitwise operator OR
 * store results back in the value on left side
 * << bitwise operator shift n  to the left side at the index
 * i.e 00000001 becomes 000010000 if we move 1 to index 3
 * return 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
		return (1);
}
