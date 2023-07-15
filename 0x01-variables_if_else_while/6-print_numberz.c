#include <stdio.h>

/**
 * main - entry point
 *
 * Description: while using int variable
 *              print 0-9 using putchar
 *
 * Return: Always (0)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
