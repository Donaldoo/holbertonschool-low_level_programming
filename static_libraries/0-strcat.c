#include "main.h"
/**
 * *_strcat - entry point
 * @dest: destination
 * @src: string that moves to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, srcString = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[srcString] != '\0')
	{
		dest[dest_len] = src[srcString];
		dest_len++;
		srcString++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
