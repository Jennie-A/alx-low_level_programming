#include "main.h"

/**
 * _memset - The function fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int a;

        for (a = 0; a < n; a++)
                s[a] = b;

        return (s);
}
