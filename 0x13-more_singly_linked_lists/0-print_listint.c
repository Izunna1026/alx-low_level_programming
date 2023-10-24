#include "lists.h"
/**
 * print_listint - to print the list
 * @h: the variable head of the node
 * Return: to return no of element
 */
size_t print_listint(const listint_t *h)
{
	size_t k;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
