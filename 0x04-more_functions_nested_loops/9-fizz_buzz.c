#include "main.h"
#include <stdio.h>

/**
 * main - the program prints numbers from 1-100, followed by a new line
 * Description:for multiples of 3, print Fizz instead of the number
 * and for multiples of five print Buzz
 * for which are multiples of both 3 and 5, print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d, i);
		}
	}
	printf("\n");

	return (0);
}


