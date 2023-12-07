#include "lists.h"
/**
 * get_dnodeint_at_index - to return the nth term
 * @head: the variable at the pointer
 * @index: the variable of th nth term
 * Return: to return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *elem = head;
	unsigned int count = 0;

	while (elem && count != index)
	{
		count++;
		elem = elem->next;
	}
	if (elem && count == index)
		return (elem);
	return (NULL);
}
