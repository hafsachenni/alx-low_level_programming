#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: pointer to the head of the list
 * Return: sum of all data and 0 if list is empty
 */`


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
