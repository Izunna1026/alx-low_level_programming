#include "lists.h"
/**
 * add_dnodeint - function to add a new node at the beginning of a list
 * @head: the variable to mark the start
 * @n: the variable n
 * Return: to the the new value added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elem;

	elem = malloc(sizeof(dlistint_t));
	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->prev = NULL;
	elem->next = *head;

	if (*head)
		(*head)->prev = elem;
	*head = elem;
	return (elem);
}
