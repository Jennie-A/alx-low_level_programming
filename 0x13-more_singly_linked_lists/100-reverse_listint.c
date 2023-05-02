#include "lists.h"

/**
 * reverse_listint - the function reverses a listint_t linked list
 * @head: pointer to first node
 * Return: pointer to first node of reversed link
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || (*head)->next == NULL)
		return (NULL);

	temp = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;

	*head = temp;

	return (*head);
}
