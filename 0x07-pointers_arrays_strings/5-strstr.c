#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring.
 *
 * @haystack: string
 * @needle: substring
 * Return: a pointer tp the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
	{
		return (haystack);
	}
	for (; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		n = needle;
	}
	return (NULL);
}
