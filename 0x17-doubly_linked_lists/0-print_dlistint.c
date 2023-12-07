#include "lists.h"
/**
 * print_dlistint - to print the list element
 * @h: the variable of the pointer
 * Return: to return the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *elem = h;
	size_t count = 0;

	while (elem)
	{
		printf("%i\n", elem->n);
		count++;
		elem = elem->next;
	}
	return (count);
}
