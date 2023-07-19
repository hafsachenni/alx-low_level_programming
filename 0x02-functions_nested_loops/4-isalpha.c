#include "main.h"

/**
 * _isalpha - ckecks if c is a character
 *
 * @c: the variable character
 *
 * Return: (0)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
