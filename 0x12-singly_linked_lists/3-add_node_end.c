#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Add node to the end of a linked list
 * @head: pointer to the address of the first note
 * @str: pointer to string
 * Return: NULL if failed, Adress of new node if success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *last, *temp;

	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			last = *head;
			while (last->next != NULL)
			{
				last = last->next;
			}
			last->next = temp;
		}

		while (str[i])
		{
			i++;
		}

		temp->len = i;

	}

	return (temp);

}
