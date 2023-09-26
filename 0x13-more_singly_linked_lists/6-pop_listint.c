#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
    listint_t	*lst;
    int			cont;

    if (!(*head) || !head)
        return (0);
    lst = *head;
    cont = lst->n;
    free(lst);
    *head = (*head)->next;
    return (cont);
}
