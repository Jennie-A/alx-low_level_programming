#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * if the linked list is empty return 0
 * @head: double pointer
 * @n: integer
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = (*head)->n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (n);
}
