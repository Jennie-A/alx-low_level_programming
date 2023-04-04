#include "lists.h"

/**
 * print_listint - the function prints all the elements of listint_t
 * @h: pointer to the first node
 * @n: integer data
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
