#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * @s: a pointer to the memory area to be filled
 * @b: constant byte
 * @n: the number of bytes to be filled.
 *
 * Return: A pointer to be filled memory area @s.
 */
void *_memset(void *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
