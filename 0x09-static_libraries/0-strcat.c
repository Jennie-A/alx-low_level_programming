#include "main.h"

/**
 * _strcat - the function appends src string to dest
 * overwriting the terminating null byte (\0) at the end of dest
 *
 * and then a terminating \0 byte
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }

        dest[i] = '\0';
        return (dest);
}
