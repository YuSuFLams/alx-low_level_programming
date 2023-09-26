#include "lists.h"

/**
 *add_nodeint - Adds a new_list node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new_list node to contain
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = (listint_t *)malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
