#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @head: head
 * Return: rsult
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += heaf->n;
		head = head->next;
	}
	
	return (i);
}
