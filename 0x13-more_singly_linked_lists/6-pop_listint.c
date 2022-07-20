#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to head node
 *
 * Return: returns 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *newHead = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	newHead = (*head)->next;
	free(*head);
	*head = newHead;

	return (1);
}
