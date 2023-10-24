#include "lists.h"
/**
 * creation - to create a new node
 * @n: the n in structure
 * Return: to return the newnode
 */
listint_t *creation(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
/**
 * insert_nodeint_at_index - to insert node
 * @head: the first node
 * @idx: the index
 * @n: the nth term
 * Return: to return newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;

	listint_t *new, *formal, *newnode;

	new = *head;

	if (head == NULL)
		return (NULL);
	newnode = creation(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
		*head = newnode;
	for (j = 0; j < idx - 1 && new != NULL && idx != 0; j++)
		new = new->next;
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = new;
	else
	{
		formal = new->next;
		new->next = newnode;
		newnode->next = formal;
	}
	return (newnode);
}
