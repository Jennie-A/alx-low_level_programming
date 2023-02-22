#include "main.h"

/**
 * print_alphabet - print alphabet in lowercases followed by new a line
 *
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void);
	char L;

	for (L = 'a'; L <= 'Z'; L++)
		_putchar(L);
	_putchar('\n');
	return (0);
}
