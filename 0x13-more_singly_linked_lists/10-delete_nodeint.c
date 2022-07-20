#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at given index
 * @head: Pointer to linked list
 * @index: index of node to be deleted
 *
 * Return: if suceess returns 1, else returns -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *temp = *head;
	unsigned int i;


	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 1)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 2; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	
	*prev = temp->next->next;
	free(temp->next);
	temp = temp->next;

	return (1);
}
