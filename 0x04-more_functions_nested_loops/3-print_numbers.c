#include "main.h"

/**
 * print_numbers - print 0 - 9 followed by new line
 *
 * Return: Always 0
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
