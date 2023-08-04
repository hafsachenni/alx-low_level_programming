#include "main.h"

/**
 * *_strcpy - copies a string into a buffer
 * @dest: where string will be copied
 * @src: the string
 * Return: return the ptr
 */

char *_strcpy(char *dest, char *src)
{
        char *ptr = dest;

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (ptr);
}
