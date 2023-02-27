#include "main_h"

/**
 * swap_int - The function swaps the value of 2 integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
