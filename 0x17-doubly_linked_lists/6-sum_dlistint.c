#include "lists.h"
/**
 * sum_dlistint - to add all the data
 * @head: the variable pointer of list
 * Return: to return the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *elem = head;
	int add = 0;

	while (elem)
	{
		add += elem->n;
		elem = elem->next;
	}
	return (add);
}
