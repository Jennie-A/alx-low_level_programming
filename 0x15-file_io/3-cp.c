#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fdes, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: array of strings passed to argument count
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int file_f, file_to, num_read = 1024, wrote, close_file_f, close_file_to;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_f file_to\n");
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	check_IO_stat(file_f, -1, argv[1], 'O');
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(file_to, -1, argv[2], 'W');
	while (num_read == 1024)
	{
		num_read = read(file_f, buffer, sizeof(buffer));
		if (num_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(file_to, buffer, num_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_file_f = close(file_f);
	check_IO_stat(close_file_f, file_f, NULL, 'C');
	close_file_to = close(file_to);
	check_IO_stat(close_file_to, file_to, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: open or close
 * @fdes: file descriptors
 *
 * Return: void
 */
void check_IO_stat(int stat, int fdes, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdes %d\n", fdes);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
