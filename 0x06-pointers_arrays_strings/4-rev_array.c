#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: num of elements of the array
 * @n: num of elements in array
 * Return: void
 */

void reverse_array(int *a, int n);
{
	int a;
	int b;

	for (a = 0; a < n--; a++)
	{
		b = a[a];
		a[a] = a[n];
		a[n] = b;
	}
}
