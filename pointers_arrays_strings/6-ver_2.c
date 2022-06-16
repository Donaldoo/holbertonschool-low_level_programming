#include "main.h"

char *cap_string(char *s)
{
	int length = 0;
	int readSep;
	int sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[length] >= 'a' && s[length] <= 'z')
		s[length] -= 32;
	while (s[length])
	{
		for (readSep = 0; readSep < 13; readSep++)
		{
			if (s[length] == sep[readSep])
			{
				if (s[length + 1] >= 'a' && s[length + 1] <= 'z')
					s[length + 1] -= 32;
			}
		}
		length++;
	}
	return (s);
}
