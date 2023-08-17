#include "variadic_functions.h"

/**
 * print_numbers - prints nums
 * @n: num of int
 * @separator: string to be printed
 * @...: variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i == n - 1)
			separator = "";

		printf("%d%s", x, separator);
	}
	printf("\n");
}
