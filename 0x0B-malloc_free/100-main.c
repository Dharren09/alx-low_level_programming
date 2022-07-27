#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code  for ALX School Students
 *
 * Return: Always 0
 */
int main(int ac, int *av[])
{
	char *s;

	s = argstostr(ar, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
