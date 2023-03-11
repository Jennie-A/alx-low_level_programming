#include <stdio.h>

/**
 * main - the function prints the number arguments passed into it
 * @argc: the argument count
 * @argv: the argument array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc, i++)
	printf("%d\n");

	return (0);
}
