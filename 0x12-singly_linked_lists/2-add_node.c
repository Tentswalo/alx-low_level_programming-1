#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Add a new node at the beginning of a linked list
 * @str: Node string
 * @head: Head pointer at the top of the list
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *temp = malloc(sizeof(list_t));

	temp->str = strdup(str);

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i])
		{
			i++;
		}

		temp->len = i;
		temp->next = *head;
		*head = temp;
	}

	return (temp);
}
