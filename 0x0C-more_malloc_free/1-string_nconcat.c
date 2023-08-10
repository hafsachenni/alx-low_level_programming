#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function tha concatenates 2 strings
 * @s1: first input string
 * @s2: second one
 * @n: max num of chars
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, 11, 12;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	11 = strlen(s1);
	12 = strlen(s2);

	if (n >= 12)
		n = 12;
	s = (char *) malloc(sizeof(char) * (11 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < 11; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
