#include "main.h"
/**
 * string_nconcat - entry point
 * @s1: string
 * @s2: string
 * @n: n of bytes
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int index = 0;
	unsigned int concat_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	concat = malloc(1 + sizeof(char) * (len1 + n));
	if (concat == NULL)
		return (NULL);

	if (n > len2)
		len2 = n;
	for (index = 0; s1[index]; index++)
		concat[concat_index++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[concat_index++] = s2[index];

	return (concat);
}
