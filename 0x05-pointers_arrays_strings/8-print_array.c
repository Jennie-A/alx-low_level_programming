#include "main.h"

/**
 * print_array - the function prints elements of an array of integers
 * followed by new line
 *
 * @n: is the number of elements of the array to be printed
 * @a: array name
 * Description: numbers must be separated by comma, followed by space
 * numbers should be displayed in the same order as they are
 * stored in array
 * Return: a and n inputs
 */
void print_array(int *a, int n);
{#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
