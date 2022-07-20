#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: pointer to linked list
 *
 * Return: Nothing. Always void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *store = temp;

		temp = temp->next;
		free(store);
	}

	*head = NULL;


}
