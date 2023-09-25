#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *newNode = malloc(sizeof(listint_t));
    newNode->n = n;
    newNode->next=NULL;
    if (*head == NULL)
    {
      *head = newNode;
    }

    listint_t *curr = *head;
   
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    return curr;
}
