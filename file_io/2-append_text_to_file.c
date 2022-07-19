#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: ptr to the file name
 * @text_content: ptr to the string to append to the file
 * Return: 1 if succes, -1 if failure or user doesn't have write permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
