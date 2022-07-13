#include "main.h"

/**
 * string_toupper - C hanges all lowercase letters to upper case
 * @p: The string will be modified
 *
 * Return: Char var
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}
	return (p);
}
