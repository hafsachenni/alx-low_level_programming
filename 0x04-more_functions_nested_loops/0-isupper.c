#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: 1 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 65 ; c <= 90 ;c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
