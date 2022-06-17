#include "main.h"
/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int sLen = 0;
	int accLen;

	for ( ; s[sLen]; sLen++)
	{
		for (accLen = 0; accept[accLen]; accLen++)
		{
			if (s[sLen] == accept[accLen])
				return (s + sLen);
		}
	}
	return ('\0');
}
