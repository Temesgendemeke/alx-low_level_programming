#include "lists.h"
/**
 * free_listint2 - set head to NULL.
 * @head: pointer
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *jim = *head;
	listint_t *temp;

	while (jim != NULL)
	{
		temp = jim;
		jim = jim->next;
		free(temp);
	}
	*head = NULL;
}
