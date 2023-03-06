#include "main.h"

/**
 * _strchr - a function that locates a characater in a string
 * @s: the string character
 * @c: another char given
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
