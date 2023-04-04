#include "lists.h"

/**
 * free_listint2 - the function frees a listint_t list
 * @head: double pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	head = NULL;
}
