#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h : pointer that points to first element
 * Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
