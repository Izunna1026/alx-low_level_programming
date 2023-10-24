#include "lists.h"
/**
 * add_nodeint - adding new node
 * @head: pointer to the pointer of head
 * @n: the variable
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (0);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
	{
		newnode->next = *head;
	}
	newnode->n = n;
	*head = newnode;
	return (*head);
}
