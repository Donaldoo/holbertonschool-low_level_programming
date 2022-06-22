#include "main.h"
/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error");
				return(1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}