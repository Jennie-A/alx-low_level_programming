#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - this function reads and prints a file
 * @filename: storage of file
 * @letters: holds the number of letters
 * Return: actual number of letters read
 * or 0 if file cannot be read or opened
 * or if file name is NULL, 0 else -1 if write does not read or open
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	char *buf;
	ssize_t reads, written_text;

	if (filename == NULL)
		return (0);

	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(n);
		return (0);
	}

	reads = read(n, buf, letters);
	if (reads == -1)
	{
		close(n);
		free(buf);
		return (0);
	}

	buf[reads] = '\0';

	written_text = write(STDOUT_FILENO, buf, reads);
	if ((written_text == -1) || (written_text != reads))
	{
		close(n);
		free(buf);
		return (0);
	}

	close(n);
	free(buf);

	return (reads);
}
