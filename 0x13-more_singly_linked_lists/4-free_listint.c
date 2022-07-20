#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Deallocated linked list
 * @head: pointer to the head of the linked list
 *
 * Return: None. Always void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
