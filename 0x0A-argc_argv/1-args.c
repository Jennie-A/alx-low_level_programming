#include <stdio.h>

/**
 * main - the function prints the number arguments passed into it
 * @argc: the argument count
 * @argv: the argument array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
