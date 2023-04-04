#include "lists.h"

/**
 * listint_len - the function returns the number of elements
 * in a linked list listint_t
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
