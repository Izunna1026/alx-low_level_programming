#include "lists.h"
/**
 * listint_len - list no of elements
 * @h: the head
 * Return: to return the no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}
