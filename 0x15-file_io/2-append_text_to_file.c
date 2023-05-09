#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - a function that appends text at end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the end of the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL do not add anything to the file
 * 1 if file exist otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;
	int value;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	f = fopen(filename, "a");
	if (f == NULL)
		return (-1);
	value = fputs(text_content, f);
	fclose(f);

	return (value == EOF) ? -1 : 1;
}
