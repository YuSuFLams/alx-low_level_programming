#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*new_list;
	list_t	*last;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = strlen(str);
	new_list->next = NULL;
	if (!(*head))
		*head = new_list;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_list;
	}
	return (new_list);
}
