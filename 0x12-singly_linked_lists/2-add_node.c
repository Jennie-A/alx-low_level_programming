#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	size_t n;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	add_node->len = n;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
