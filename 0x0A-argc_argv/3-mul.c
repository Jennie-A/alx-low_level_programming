#include <stdio.h>
#include <stdlib.h>

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
		printf("Error\n");
		return (1);
	}


		a = atoi(argv[1]);
		b = atoi(argv[2]);
		results = a * b;

		printf("%d\n", results);

		return (0);

}
