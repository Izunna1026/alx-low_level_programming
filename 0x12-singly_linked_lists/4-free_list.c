#include "lists.h"
/**
 * free_list - to free the list
 * @head: the first node
 * Return: to return head
 */
void free_list(list_t *head)
{
	list_t *coded;

	while (head)
	{
		coded = head;
		head = head->next;
		free(coded->str);
		free(coded);
	}
	free(head);
}
