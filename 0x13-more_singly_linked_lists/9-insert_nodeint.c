#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new_lst node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new_lst node should be added
 * @n: data to be added to the new_lst node
 * Return: address of the new_lst node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_lst;
	listint_t *lst;
	unsigned int i;

	new_lst = malloc(sizeof(listint_t));
	if (!new_lst || !head)
		return (NULL);
	new_lst->n = n;
	if (idx == 0)
	{
		new_lst->next = *head;
		*head = new_lst;
		return (new_lst);
	}
	lst = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!lst)
		{
			free(new_lst);
			return (NULL);
		}
		lst = lst->next;
	}
	new_lst->next = lst->next;
	lst->next = new_lst;
	return (new_lst);
}
