#include "lists.h"
/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: pointer
 * @index: nth number
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (curremt != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
