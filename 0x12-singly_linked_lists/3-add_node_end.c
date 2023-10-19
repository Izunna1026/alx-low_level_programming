#include "lists.h"
/**
 * add_node_end - to add new node
 * @head: the first node
 * @str: the string
 * Return: to return head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added, *coded;
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
	added->next = NULL;
	coded = *head;

	if (coded == NULL)
		*head = added;
	else
	{
		while (coded->next != NULL)
			coded = coded->next;
		coded->next = added;
	}
	return (*head);
}
