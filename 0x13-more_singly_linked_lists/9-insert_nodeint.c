#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position
 * @idx: index of the list where new node should be inserted
 * index starts at 0
 * @n: integer
 * @head: double pointer
 * if newnode insertion is not possible at idx,
 * do not add and return NULL
 * Return: address or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	unsigned int i;
	unsigned int n;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	temp = *head;
	if (!newNode)
		return (NULL);

	for (i = 0; i < idx; i++)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
