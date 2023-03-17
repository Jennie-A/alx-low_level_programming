#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the function that allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: size of byte
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int r;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	t = malloc(nmemb * size);
	tmp = t;
	if (t == 0)
	{
		return (NULL);
	}
	for (r = 0; r < (nmemb * size); r++)
		t[r] = 0;
	return (tmp);
}
