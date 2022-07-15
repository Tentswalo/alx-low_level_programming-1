#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to the head of the linked list to be printed
 *
 * Return: Number of nodes in success.
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t index = 0;

	temp = h;

	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			while (temp != NULL)
			{
				printf("[%i] %s\n", temp->len, temp->str);
				temp = temp->next;
				index++;
			}
		}
	}

	return (index);
}
