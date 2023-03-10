#include "main.h"

/**
 * _strchr - a function that locates a characater in a string
 * @s: the string character
 * @c: another char given
 * Return: string
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
