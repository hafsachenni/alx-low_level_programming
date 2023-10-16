#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: is the variable repalced by number
 *
 * Return: c when num is less than 0
 */

int _abs(int c)
{
	if (c < 0)
		c = c * (-1);
	return (c);
}
