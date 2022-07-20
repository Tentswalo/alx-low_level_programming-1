#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Add a node to the head of a linked list
 * @head: Pointer to the pointer of the linked list
 * @n: value to add to new node
 * Return: Address of new element, Or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
