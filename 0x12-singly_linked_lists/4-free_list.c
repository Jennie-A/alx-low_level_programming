#include "lists.h"

/**
 * free_list - the function frees list_t list
 * @head: pointer to first node
 * Return: pointer
 */
void free_list(list_t *head)
{
	for (list_t *current = head; current != NULL)
	list_t *next = current->next;

	free(current);
	current = next;
}
