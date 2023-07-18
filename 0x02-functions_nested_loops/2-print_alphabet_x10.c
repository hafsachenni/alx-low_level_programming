#include "main.h"

/**
 * main - Entry point.
 *
 * Description: print ten times the alphabet in lowercase.
 *
 * Return: Always 0.
 */

void main(void)
{

char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
_putchar('\n');
i++;
}
}
