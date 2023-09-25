#include "lists.h"
/**
 * add_nodeint - add elements to begining
 * @head: pointing to first element
 * @n: elements to be added
 * Return: address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	return (*head = newNode);
}
