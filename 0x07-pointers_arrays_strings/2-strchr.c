#include "main.h"

/**
 * *_strchr - locates a charater in a string
 *
 * @s: string
 * @c: character to be located
 * Return: pointer to the first occurance of NULL if no charter found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0):
}
