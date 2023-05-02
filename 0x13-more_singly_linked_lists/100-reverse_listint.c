#include "lists.h"

/**
 * reverse_listint - the function reverses a listint_t linked list
 * @head: pointer to first node
 * Return: pointer to first node of reversed link
 */
/** this function used recursion to reverse a singly linked list, list
 *  it first creates a temporary pointer
 *  and later checks if the head is null or the next field of the same node is null, then it returns the pointer
 *  call function (recursively) the pointer points to the current node in the list by passing the address sign (&) of the next node
 *  reverse_listint recursively traverse thru the list until it reaches the end
 *  the head pointer points to the first node in the list
 *  *head=>next points to the next node
 *  *head->next->next points to the field of the second node which will be set to the address of the 1st node
 *  assign *head to the next field of the second node
 *  *head->next = null; sets next pointer original node to null after it has been moved to end of the list
 *  note that, recursion is not always advisable when dealing with big data.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	temp = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;

	*head = temp;

	return (*head);
}
