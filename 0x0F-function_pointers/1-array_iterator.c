#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
