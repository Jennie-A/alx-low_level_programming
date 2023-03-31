#include "lists.h"

/**
 * free_list - the function frees list_t list
 * @head: pointer to first node
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next_node = head->next;

		free(head->str);
		free(head);

		head = next_node;
}
