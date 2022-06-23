#include "main.h"
/**
 * str_concat - entry point
 * @s1: string 1
 * @s2: string 2
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	for ( ; s1[i]; i++)
		concat[j++] = s1[i];

	for ( ; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
}
