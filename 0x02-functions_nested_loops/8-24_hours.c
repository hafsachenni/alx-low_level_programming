#include "main.h"

/**
 * jack_bauer - prints every min of the day of Jack Bauer
 *
 * Starting from 00:00 to 23:59
 *
 * Return: ...
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
					if (a >= 2 && b >= 0)
						break;
			-putchar((a / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar('\n');
			}
		}
	}
}
}
