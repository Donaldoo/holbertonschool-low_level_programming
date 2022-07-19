#include "main.h"

/**
 * create_file - creates a file.
 * @filename: ptr to the file name
 * @text_content: ptr to the string containing the file's content
 * Return: 1 if succes, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;

		w = write(fd, text_content, length);
		if (w == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
