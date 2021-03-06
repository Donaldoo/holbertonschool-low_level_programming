#include "main.h"

/**
 * read_textfile - reads a txt file and prints it to POSIX stdout
 * @filename: ptr to the name of the file
 * @letters: num of letter the function should read
 * Return: num of bytes the function reads, 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (w);
}
