#include "lists.h"
/**
 * insert_dnodeint_at_index - to place node at a position
 * @h: the variablelist pointer
 * @idx: the place to place the node
 * @n: the new node data
 * Return: to return the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *a = *h;
	unsigned int count = 0, in;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		ew->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}
	in = idx - 1;
	while (a && count != in)
	{
		count++;
		a = a->next;
	}

	if (count == in && a)
	{
		new->prev = a;
		new->next = a->next;
		if (a->next)
			a->next->prev = new;
		a->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
