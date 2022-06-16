#include "main.h"
/**
 * *leet - entry point
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int length = 0;
	int index;
	int lowCase[5] = {'a', 'e', 'o', 't', 'l'};
	int uppCase[5] = {'A', 'E', 'O', 'T', 'L'};
	int leetNum[5] = {'4', '3', '0', '7', '1'};

	while (s[length])
	{
		for (index = 0; index < 5; index++)
		{
			if (s[length] == lowCase[index] || s[length] == uppCase[index])
				s[length] = leetNum[index];
		}
		length++;
	}
	return (s);
}
