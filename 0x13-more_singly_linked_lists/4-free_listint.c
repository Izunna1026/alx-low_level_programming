#include "lists.h"
/**
 * free_listint - to free a list
 * @head: the head
 * Return: to free tmp
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	while ((k = head) != NULL)
	{
		head = head->next;
		free(k);
	}
}
