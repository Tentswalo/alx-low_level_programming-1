#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @index: index of node to be retrieved
 * @head: pointer to head of linked list
 *
 * Return: Value at index, or null if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int p;

	p = 0;

	while (temp != NULL)
	{
		if (p == index)
		{
			return (temp);
			p++;
			temp = temp->next;
		}
	}

	return (0);
}
