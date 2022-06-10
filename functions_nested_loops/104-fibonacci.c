#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	long int num1, num2, fib, fib2, num_h, num_t, b;
	int boolean1, boolean2, i;

	num1 = 1;
	num2 = 2;
	b = 1000000000;
	boolean1 = boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 2; i < 93; i++)
	{
		if (boolean1)
		{
			fib = num1 + num2;
			printf(", %ld", fib);
			num1 = num2;
			num2 = fib;
		}
		else
		{
			if (boolean2)
			{
				num_h = num1 % b;
				num_t = num2 % b;
				num1 = num1 / b;
				num2 = num2 / b;
				boolean2 = 0;
			}
			fib2 = num_h + num_t;
			fib = num1 + num2 + (fib / b);
			printf(", %ld", fib);
			printf("%ld", fib2 % b);
			num1 = num2;
			num_h = num_t;
			num2 = fib;
			num_t = fib2 / b;
		}
		if ((num1 + num2 < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("\n");
	return (0);
}
