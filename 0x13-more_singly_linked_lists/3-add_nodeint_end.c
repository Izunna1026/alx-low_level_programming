#include "lists.h"
/**
 * add_nodeint_end - adding a new node at the end
 * @head: the head
 * @n: the variable n
 * Return: to return head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *k;

	newnode = malloc(sizeof(listint_t));

	(void) k;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	k = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (k->next != NULL)
		{
			k = k->next;
		}
		k->next = newnode;
	}
	return (*head);
}
