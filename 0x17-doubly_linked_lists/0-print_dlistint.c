#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - funcation prints all element in linked list
 * @h: pointer struct
 * Return: no of elements
 */
size_t print_dlistint(const dlistint_t *h)
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
