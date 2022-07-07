#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - debugging
 * Return: 0
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = 1;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
