#include "lists.h"

/**
 * get_nodeint_at_index - write a function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: as an iterator
 * Return: Null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp;
	unsigned int i;

	temp = head;

	if (head == NULL)
	return (NULL);

	for (i = 0; i < index; i++)
	temp = temp->next;

	return (temp);
}
