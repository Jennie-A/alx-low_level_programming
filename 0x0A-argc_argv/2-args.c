#include <stdio.h>

/**
 * main - the programs prints all arguments it receives
 * all argument should be printed including the first one
 * only one argument per line
 * @argc: arguments to be counted
 * @argv: array to be counted
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
