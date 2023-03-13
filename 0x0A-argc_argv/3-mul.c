#include <stdio.h>

/**
 * main - the program multiplies two numbers
 * the prgram prints the results of the multiplication
 * followed by a new line
 * Return: if the program does not receive two arguments - 1
 * if it receives two arguments - 0
 * @argc: the number of arguments
 * @argv: the array of pointers to the arguments
 */
int main(int argc, char *argv[])
{
	int a, b, results;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[0]);
		b = atoi(argv[1]);
		results = a * b;

		printf("%d\n", results);

		return (0);
	}
}
