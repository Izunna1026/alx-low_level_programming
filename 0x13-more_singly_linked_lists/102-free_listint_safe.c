#include "lists.h"
/**
 * listed_1 - to list
 * @head: the first node usually the head
 * Return: to free the newnode
 */
void listed_1(listin_t **head)
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
 * free_listint_safe - to free a node
 * @h: represent the head
 * Return: the element
 */
size_t free_listint_safe(listint_t **h)
{
	size_t elem = 0;
	listin_t *i, *new, *k;
	listint_t *newnode;

	i = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listin_t));
		if (new == NULL)
			exit(98);
		new->t = (void *)*h;
		new->next = i;
		i = new;
		k = i;

		while (k->next != NULL)
		{
			k = k->next;
			if (*h == k->t)
			{
				*h = NULL;
				listed_1(&i);
				return (elem);
			}
		}
		newnode = *h;
		*h = (*h)->next;
		free(newnode);
		elem++;
	}
	*h = NULL;
	listed_1(&i);
	return (elem);
}
