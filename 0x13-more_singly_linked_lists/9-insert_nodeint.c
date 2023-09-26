#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer
 * @idx: index
 * @n : value to be added
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
listint_t *current = *head;
if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;
newNode->next = NULL;
if (idx == 0) 
{
    newNode->next = *head;
    *head = newNode;
    return (newNode);
}

while (current != NULL && idx > 1)
{
current = current->next;
idx--;
}
if (current == NULL || idx > 1) 
{
    return NULL;
}

newNode->next = current->next;
current->next = newNode;
return (newNode);
}
