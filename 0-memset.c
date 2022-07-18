#include "main.h"

/**
 * memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.		
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: A pointer to be filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] + value;

	return (memory);
}
