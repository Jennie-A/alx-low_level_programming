#include "main.h"

/**
 * _memcpy - the function memory area
 * @n: number of bytes to be copied
 * @src: memory source
 * @dest: memory destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
		dest[b] = src[b];
	return (dest);
}
