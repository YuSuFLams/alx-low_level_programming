#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head)
	{
		next = (*head)->next;
		free((*head));
		(*head) = next;
	}
}

