#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 * @n: value of new node
 * @head: pointer to the pointer to the head of the linked list
 *
 * Return: Address of new node, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last_node = *head;


	new_node->n = n;
	new_node->next = NULL;

	if (!new_node)
	{
		return (NULL);
	}
	
	if (*head == NULL)
	{
		*head =	new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	return (last_node);


}

