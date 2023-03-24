#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - the function prints numbers
 * followed by a new line
 * @separator: the string to be printed between numbers
 * @n: size of integer
 * if separator is NULL dont print
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int i;

	va_start(my_numbers, n);

	if (separator != NULL)
		printf("%s", separator);

	for (i = 0; i < n; i++)
		printf("%d", va_arg(my_numbers, int));

	va_end(my_numbers);

	printf("\n");
}
