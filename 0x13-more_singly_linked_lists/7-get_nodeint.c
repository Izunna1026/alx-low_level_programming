#include "lists.h"
/**
 * get_nodeint_at_index - add a node at index
 * @head: the head
 * @index: the variable nth term
 * Return: to return head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
