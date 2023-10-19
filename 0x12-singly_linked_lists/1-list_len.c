#include "lists.h"
/**
 * list_len - the list length
 * @h: the head
 * Return: to return elem
 */
size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
