#include "lists.h"
/**
 * listed - to list
 * @head: the first node
 * Return: to return 0
 */
void listed(listin_t **head)
{
	listin_t *new;
	listin_t *newnode;

	if (head != NULL)
	{
		newnode = *head;
		while ((new = newnode) != NULL)
		{
			newnode = newnode->next;
			free(new);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - print the list
 * @head: the head of the list
 * Return: to return head
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t elem = 0;
	listin_t *newnode, *h, *k;

	h = NULL;

	while (head != NULL)
	{
		newnode = malloc(sizeof(listin_t));
		if (newnode == NULL)
			exit(98);
		newnode->t = (void *)head;
		newnode->next = h;
		h = newnode;
		k = h;

		while (k->next != NULL)
		{
			k = k->next;
			if (head == k->t)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				listed(&h);
				return (elem);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		elem++;
	}
	listed(&h);
	return (elem);
}
