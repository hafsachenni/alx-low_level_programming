#include <stdio.h>

/**
 *
 *
 *
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	/*print A -Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	Return (0);
}
