#include "lists.h"
/**
 * find_listint_loop - find the list in a loop
 * @head: the head of the node
 * Return: the head
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *part;
	listint_t *formal;

	part = head;
	formal = head;
	while (head && part && part->next)
	{
		head = head->next;
		part = part->next->next;

		if (head == part)
		{
			head = formal;
			formal = part;
			while (1)
			{
				part = formal;
				while (part->next != head && part->next != formal)
				{
					part = part->next;
				}
				if (part->next == head)
					break;
				head = head->next;
			}
			return (part->next);
		}
	}
	return (NULL);
}
