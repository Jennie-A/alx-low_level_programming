#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string
 * given as a parameter
 * @str: string variable
 * Return: NULL if str = NULL
 * otherwise, pointer
 */
char *_strdup(char *str)
{
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}

	pointer = strdup(str);
	if (!pointer)
	{
		return (NULL);
	}

	return (pointer);
}
