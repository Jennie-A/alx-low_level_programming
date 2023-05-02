#include "lists.h"

/**
 * delete_nodeint_at_index - the function deletes a node at an index
 * @index: the index of the node to delete
 * @head: double pointer
 * Return: 1 on success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	current_node = *head;

	for (i = 0; i < index; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
	}
	current_node->next = temp->next;
	free(temp);

	return (1);
}

