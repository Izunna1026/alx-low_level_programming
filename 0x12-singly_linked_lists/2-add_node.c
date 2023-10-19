#include "lists.h"
/**
 * add_node - new node should be added
 * @head: the first node
 * @str: to duplicate string
 * Return: to return head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added;

	unsigned int k;

	unsigned int counting = 0;

	added = malloc(sizeof(list_t));
	if (added == NULL)
	{
		return (NULL);
	}
	added->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		counting++;
	added->len = counting;
	added->next = *head;
	*head = added;

	return (*head);
}
