#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: void.
 */

void free_list(list_t *head)
{

	for (list_t *current_node = head; current_node != NULL;)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
