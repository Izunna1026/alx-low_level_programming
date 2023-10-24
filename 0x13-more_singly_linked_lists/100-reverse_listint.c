#include "lists.h"
/**
 * reverse_listint - to reverse the list
 * @head: the first node
 * Return: to return head or null
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *newmode;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = *head;
	*head = new->next;
	new->next = NULL;

	while (*head != NULL)
	{
		newmode = (*head)->next;
		(*head)->next = new;
		new = *head;
		if (newmode == NULL)
			return (*head);
		*head = newmode;
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	return (NULL);
}

