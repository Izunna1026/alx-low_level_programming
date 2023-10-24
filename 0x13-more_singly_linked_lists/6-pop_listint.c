#include "lists.h"
/**
 * pop_listint - deleting the firstfrom the list
 * @head: pointer to the head
 * Return: to return count
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	newnode = *head;
	*head = (*head)->next;
	free(newnode);
	return (n);
}
