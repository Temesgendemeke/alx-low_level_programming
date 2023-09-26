#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *curry = *head;
	if (*head == NULL) return (0);
   	
	curry->next = curry->next->next;

	return (curry->n);
}
