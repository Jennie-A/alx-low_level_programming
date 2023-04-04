#include "lists.h"

/**
 * free_listint - the function frees listint_t list
 * Return: nothing
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
