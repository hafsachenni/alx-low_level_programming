#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: char to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	for (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
