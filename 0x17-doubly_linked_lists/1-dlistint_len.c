#include "lists.h"
/**
 * dlistint_len - funcation prints all element in linked list
 * @h: pointer struct
 * description: prints elements in double linked lists
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t counter = 0;

while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
