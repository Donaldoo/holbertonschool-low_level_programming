#include "main.h"
/**
 * _strlen - entry point
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int len = 0;

	while (string[len])
		len++;
	return (len);
}

/**
 * argstostr - entry point
 * @ac: int
 * @av: pointer
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int len = 0, i = 0, j = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for ( ; i < ac; i++)
		len += _strlen(av[i]);

	string = malloc(len * sizeof(char) + 1);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++)
			string[n++] = av[i][j];
		string[n++] = '\n';
	}
	return (string);
}

