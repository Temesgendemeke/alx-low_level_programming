#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return:head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *curry = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = curry->n;
	*head = curry->next;
	free(curry);
	return (n);
}
