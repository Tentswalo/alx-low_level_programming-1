#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint -sums the elements of a linked list
 * @head: pointer to list head
 *
 * Return: Sum of elements on success, otherwise returns 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum, i;

	i = 0;
	sum = 0;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			i++;
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
		return (0);
}
