#include "main.h"

/**
 * main - printing alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char ch;
int i = 10;

while (i <= 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);

	_putchar('\n');
i++;
}
}
}
