#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h : pointer that pointing to the first element
 * Return: number of elemnts
 */
size_t print_listint (const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
