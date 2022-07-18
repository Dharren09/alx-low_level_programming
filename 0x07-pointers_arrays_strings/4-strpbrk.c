#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: bytes
 * Return: pointer to the byte in s
 */
char *_strbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
/**
 * *_strchr - locates a character in a string
 *
 * @s: string
 * @c: chracter to be located
 * Return: pointer to the first occuence of NULL if no character found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		       return (s);
	} while (*s++);
	return (NULL);
}
