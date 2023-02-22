#include "main.h"

/**
 * print_alphabet - print alphabet in lowercases followed by new a line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');

}
