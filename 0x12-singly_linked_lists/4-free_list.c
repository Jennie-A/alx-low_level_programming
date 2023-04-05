#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: void.
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;

	free_list(head->next);
	free(head);
}
