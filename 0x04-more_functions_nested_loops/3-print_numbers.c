#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             using putchat twice
 *
 * Return: always (0)
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
        _putchar(c);
	}
	_putchar('\n');
}
