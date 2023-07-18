#include "main.h"

/**
 * print_ alphabet_x10 - Prints x10 times the alphabet
 *
 * Return: always (0)
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
