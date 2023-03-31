#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - the function prints all the elements of list_t list
 * If str is NULL, print [0] (nil)
 * @h: linked list header
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (str == NULL)
		printf("[0], (nil)\n");

	while (h != NULL)

	if (h->str != NULL)
		printf("%d, %s\n", h->len, h->str);
		count++;

	return (count);
}
