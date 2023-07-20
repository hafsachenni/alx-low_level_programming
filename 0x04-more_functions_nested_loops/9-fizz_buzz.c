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
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");

		else if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");

		else if (num % 5 == 0 && ! (num % 3 == 0))
			printf("Buzz");
		
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf('\n');
	}

	return (0);
}
