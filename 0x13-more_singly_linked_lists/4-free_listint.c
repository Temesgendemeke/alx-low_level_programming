#include "lists.h"
/**
 * free_listint - free memory
 * @head: pointer
 * Return: void(nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *curry = head;

	while (curry != NULL)
	{
		listint_t *temp = curry;

		curry = curry->next;
		free(temp);
	}
}
