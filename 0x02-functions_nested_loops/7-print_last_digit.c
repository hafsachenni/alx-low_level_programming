#include "main.h"

/**
 * print_last_digit - prints the last digit of the given num
 *
 * @c: is the variable that represents the number
 *
 * Return: the value of last digit x
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
		x = x * (-1);
	_putchar(x + '0');
	return (x);
}
