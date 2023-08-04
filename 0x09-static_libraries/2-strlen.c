#include "main.h"

/**
 * _strlen - it counts the length of a string
 * @s: the string
 * Return: the length of string
 */

int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                s++;
                len++;
        }
        return (len);
}
