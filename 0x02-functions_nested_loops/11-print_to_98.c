#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n : the starting point
 * retur: 0 oe 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}


