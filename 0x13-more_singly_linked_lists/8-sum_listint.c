#include "lists.h"
/**
 * sum_listint - to add the int
 * @head: the first node
 * Return: to return the addition
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
