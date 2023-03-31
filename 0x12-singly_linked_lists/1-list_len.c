#include "lists.h"

/**
 * list_len - the function returns the number of elements
 * in a linked list
 * @h: header of the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)

	h = h->next;
	count++

	return (count);
}
