#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and print it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: pointer to a string
 * Return: actual number of letters it could read and print
 * or 0 if file cannot be opened or read
 * 0 if file is NULL
 * 0 if "write" fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, bytes_written;
	char *buf = NULL;
	FILE *fp;

	buf = malloc(sizeof(char) * (letters + 1));
	{
	if (!buf || !filename)
		return (0);
	}
	fp = open(filename, "O_RDONLY");
	{
		if (!fp)
		free(buf);
		return (0);
	}

	read_bytes = read(buf, sizeof(char), letters, fp);
	{
		if (read_bytes < 0)
		close(fp);
		free(buf);
			return (0);
	}

	buf[reads] = '\0';

	bytes_written = write(STDOUT_FILENO, buf, read_bytes);
	{
	if (bytes_written < 0 || bytes_written != read_bytes)
	close(fp);
	free(buf);
	}

	close(fp);
	free(buf);

	return (read_bytes);
}

