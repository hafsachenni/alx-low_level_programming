#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @head: head
 * Return: rsult
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += heaf->n;
		head = head->next;
	}
	
	return (sum);
}
