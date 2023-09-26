#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
listint_t *current = *head;
newNode->n = n;
newNode->next = NULL;
if (newNode == NULL)
{
return (NULL);
}
while (idx > 1)
{
current = current->next;
idx--;
}
newNode->next = current->next;
current->next = newNode;
return newNode;
}
