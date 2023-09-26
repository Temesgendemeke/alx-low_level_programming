#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	if (*head == NULL) 
	{
		return (NULL);
	}
	while (current != NULL) 
	{
		listint_t *next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
