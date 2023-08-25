#include <stdio.h>
#include "lists.h"

/**
 * print_list - print sall the elements of a list_t list
 * @h: pointer
 * Return: result
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
