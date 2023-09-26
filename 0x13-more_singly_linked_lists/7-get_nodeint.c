#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of a linked list
*@head: pointer to the head of the list
*@index: index of the node required
*Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;

	i = 0;
	if (!head)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		if (!head)
			return (NULL);
		i++;
	}
	return (head);
}
