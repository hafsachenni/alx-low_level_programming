#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by new line
 *        numbers that are multiple of 3 print Fizz
 *        numbers that are multiple of 5 print Buzz
 *        numbers that are multiple of 3 and 5 print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int a = 1;

	while (a < 100)
	{
		if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0 && (a % 3) == 0)
		{
			printf("Buzz ");
		}
		else if ((a % 5) == 0 && (a % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}
	printf("Buzz\n");
	return (0);
}
