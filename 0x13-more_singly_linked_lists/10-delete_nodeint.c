#include "lists.h"
/**
 * delete_nodeint_at_index - to delete a node at index
 * @head: the first node
 * @index: the nth value
 * Return: to return 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *new, *newnode;

	new = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && new != NULL && index != 0; k++)
		new = new->next;
	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		newnode = new->next;
		free(new);
		*head = newnode;
	}
	else
	{
		if (new->next == NULL)
			newnode = new->next;
		else
			newnode = new->next->next;
		free(new->next);
		new->next = newnode;
	}
	return (1);
}
