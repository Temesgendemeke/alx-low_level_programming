#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *curr = *head;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (head == NULL)
    {
        return NULL;
    }
   
    new_node->n = n;
    new_node->next = curr;
    new_node->prev = NULL;

    curr = new_node;
    return curr;
} 