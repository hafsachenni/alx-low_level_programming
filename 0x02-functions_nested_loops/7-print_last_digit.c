#include "main.h"

/**
 * print_last_digit - prints the last digit of the given num
 *
 * @c: the variable that represents the number
 *
 * Return: the value of last digit
 */

int print_last_digit(int)
{
	int x;

	x = c % 10;
	if (x < 0)
		x = x * (-1);
	_putchar(x + '0');
	return (x);
}
