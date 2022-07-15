#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list i- frees a linked list
 *@head: pointer to the head of list to free
 *
 * Return: None. Always void.
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = NULL;
}
