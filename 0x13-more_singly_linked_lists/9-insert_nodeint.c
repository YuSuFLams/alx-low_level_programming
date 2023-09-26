#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a list node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the list node is added
 * @n: data to insert in the list node
 *
 * Return: pointer to the list node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int	i;
	listint_t		*list;
	listint_t		*temp;

	temp = *head;
	list = malloc(sizeof(listint_t));
	if (!list || !head)
		return (NULL);
	list->n = n;
	list->next = NULL;
	if (idx == 0)
	{
		list->next = *head;
		*head = list;
		return (list);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			list->next = temp->next;
			temp->next = list;
			return (list);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}