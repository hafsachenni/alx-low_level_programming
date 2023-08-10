#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  check code
 * Return: 0
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best " , "123456", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
