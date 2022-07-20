#include "main.h"
#include <stdio.h>

int check_palindrome(char *s);

/**
 * str_len - getting string len
 * @s: indicating an input value
 *
 * Dest: finding the length of a string
 * Return: returns string's length
 */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
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

int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[1])
	{
		s++;
		l--;
	}
	else
	{
	return (0);
	}

	return (1);
}

/**
 * is_palindrome - print palindrome
 * @s: input string
 *
 * Dest: return 1 if a string is a
 * Palindrome and 0 if not
 * Return: state of input string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

int is_palindrome(char *);

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main void;
{
	int r;

	r = is_palindrome("abcdcba");
	printf("%d\n", r);
	return (0);
}

