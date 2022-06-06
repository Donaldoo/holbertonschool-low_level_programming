#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %zu byte(s)", sizeof(charType));
	printf("Size of int: %zu byte(s)", sizeof(intType));
	printf("Size of long int: %zu byte(s)", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)", sizeof(longlongintType));
	printf("Size of float: %zu byte(s)", sizeof(floatType));
	return (0);
}
