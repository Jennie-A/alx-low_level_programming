#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character variable
 * Return: Null if size is 0
 * Otherwise: return pointer, or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int counting;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (!p)
	{
		return (NULL);
	}

	for (counting = 0; counting < size; counting++)
	{
		p[counting] = c;
	}
	return (p);
}
