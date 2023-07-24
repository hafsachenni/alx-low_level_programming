#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	while (a > 0)
	{
		a--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
