#include "lists.h"
/**
 * free_dlistint - function to free a list
 * @head: the variable pointer to the list
 * Return: to return 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first_node, *second_node;

	if (head)
	{
		first_node = head;
		second_node = head->next;
		while (second_node)
		{
			free(first_node);
			first_node = second_node;
			second_node = second_node->next;
		}
		free(first_node);
	}
}
