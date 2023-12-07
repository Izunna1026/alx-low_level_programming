#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete at the index, a node
 * @head: the variable list pointer
 * @index: the placwhere to delete the node
 * Return: to return 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head;
	dlistint_t *a = *head;
	unsigned int count = 0, idx;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = del_node->next;
		free(del_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	idx = index - 1;
	while (a && count != idx)
	{
		count++;
		a = a->next;
	}

	if (count == idx && a)
	{
		del_node = a->next;
		if (del_node->next)
			del_node->next->prev = a;
		a->next = del_node->next;
		free(del_node);
		return (1);
	}

	return (-1);
}
