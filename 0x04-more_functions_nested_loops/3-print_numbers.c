#include "main.h"

/**
 * print_numbers - prints num from 0 to 9, followed by a new line
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	for (char c = 48; c <= 58; c++)
	{
		_putchar(c);
		_putchar(' ');
	}
	_putchar('\n');
}
