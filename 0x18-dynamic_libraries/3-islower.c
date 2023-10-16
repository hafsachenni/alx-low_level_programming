#include "main.h"

/**
 * _islower - return 1 if character is lowercase otherwise return 0
 *
 * @c: is the char to be checked
 *
 * Return: (0)
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
