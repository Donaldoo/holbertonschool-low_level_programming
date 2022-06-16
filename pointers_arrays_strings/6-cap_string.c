#include "main.h"
/**
 * *cap_string - entry point
 * @s: string code checks
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		if (s[i] == ' ' ||
		s[i] == '\t' ||
		s[i] == '\n' ||
		s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
