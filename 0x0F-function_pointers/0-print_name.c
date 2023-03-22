#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - the function prints a name
 * @name: pointer
 * @f: pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return ();

	if (f == NULL)
		return ();

	f(name);
}
