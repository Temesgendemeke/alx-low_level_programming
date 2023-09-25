#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h : pointer that pointing to the first element
 * Return: number of elemnts
 */
size_t print_listint (const listint_t *h)
{
 const listint_t* temp = h;
 int count = 0;
  while (temp != NULL)
   {
    printf("%d\n", temp->n);
    temp = temp->next;
    count++;
}

return count;
}
