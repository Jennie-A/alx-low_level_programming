#include "lists.h"

/**
 * sum_listint - the function returns the sum
 * of all the data(n) of a linked listint_t list
 * @head: pointer to the first node
 * if list is empty, return 0
 * Return: else sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (0);

	else
		return (sum_listint(temp->next) + temp->n);
}
