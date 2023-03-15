#include "main.h"
#include <stdio.h>

/**
 * argstostr - the function concatenates all arguments of my program
 * @ac: number of argument passed to the program
 * @av: the array to the argument
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string or NULL if failure
 * each argument should be followed by a new line
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
