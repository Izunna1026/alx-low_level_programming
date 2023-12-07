#include "lists.h"
/**
 * dlistint_len - function to return the list elements
 * @h: the variable of the pointer
 * Return: to return the node
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *elem = h;
	size_t count = 0;

	while (elem)
	{
		count++;
		elem = elem->next;
	}
	return (count);
}
