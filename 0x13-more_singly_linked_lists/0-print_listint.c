#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a linked list
 * @h: pointer to first node of the linked list
 *
 * Return: Number of nodes if success
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;
	
	temp = h;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
		i++;

	}

	printf("\n");

	return (i);
}
