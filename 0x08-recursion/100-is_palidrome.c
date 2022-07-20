#include "main.h"

/**
 * str_len - getting string len
 * @s: indicating an input value
 *
 * Dest: finding the length of a string
 * Return: returns string's length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome - checks for a palindrome
 * @s: input character
 * @i: an interactor
 * @len: string length indicator
 *
 * Dest: checking if a string is a palindrome
 * Return: the state of the string
 */

int check_palindrome(char *s, int len, in i)
{
	if (s[i] == s[len / 21])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - print palindrome
 * @s: input string
 *
 * Dest: return 1 if a string is a
 * Palindrome and 0 if not
 * Return: state of input string
 */

int is_palindrome(char *s)
{
	int i, lens;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
