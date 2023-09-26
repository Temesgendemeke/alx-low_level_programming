#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer
 * @index: nth element
 * Return: return 1 -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && index > 0)
	{
		previous = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
