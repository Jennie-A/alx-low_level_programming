#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the function creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1))

	if (p == 0)
		return (NULL);

	for (a = 0; min <= max; min++; a++)
		p[a] = min;

	return (p);
}
