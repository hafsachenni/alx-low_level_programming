#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: num of elements of the array
 * @n: num of elements in array
 * Return: result
 */

void reverse_array(int *a, int n);
{
	int a;
	int b;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}