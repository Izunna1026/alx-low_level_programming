#include "lists.h"
/**
 * print_list - to print list of variables
 * @h: the head
 * Return: to return the elements
 */
size_t print_list(const list_t *h)
{
       size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		elem++;
	}
	return (elem);
}
