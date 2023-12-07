#include "lists.h"
/**
 * add_dnodeint_end - to add a node at the end of the list
 * @head: the variable head of the list
 * @n: the number to set the new node
 * Return: to return the new node or NULL if not successful
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *elem, *a = *head;

	elem = malloc(sizeof(dlistint_t));
	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->next = NULL;

	if (a)
	{
		while (a->next)
			a = a->next;
		elem->prev = a;
		a->next = elem;
	}
	else
	{
		*head = elem;
		elem->prev = NULL;
	}
	return (elem);
}

