#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area pointed
 * to by @s with the constant byte of @b
 *
 * @s: poiter to a memory area
 * @b: value that is to fill up memory area @s
 * @n: number of bytes of memory area @s to be filled with @b
 * Return: pointer to the memory areas @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
