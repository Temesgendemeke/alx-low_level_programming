#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointer to first node
 * @str :string pointer
 * Return: end.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end;
list_t *temp = *head;
unsigned int len = 0;
while (str[len])
len++;
end = malloc(sizeof(list_t));
if (!end)
return (NULL);
end->str = strdup(str);
end->len = len;
end->next = NULL;
if (*head == NULL)
{
*head = end;
return (end);
}
while (temp->next)
temp = temp->next;
temp->next = end;
return (end);
}

