#include "lists.h"
/**
 * list_len - function that returns the no of elements in a linked list_t list.
 * @h: struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
