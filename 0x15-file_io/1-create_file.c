#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL, -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fds; /*file descriptor*/
	int value;/*stores return value of write*/
	size_t length = 0; /*store length of string*/

	if (filename == NULL)
		return (-1);
	fds = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);

	if (fds == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		value = write(fds, text_content, length);
	}
	if (value != (ssize_t)length)
	{
		close(fds);
		return (-1);
	}

	close(fds);

	return (1);
}
