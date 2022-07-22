#include "main.h"

/** 
 * _isupper - Checks for the uppercase characters
 * @c: Number to be checked
 * Return: 1 (Success) or ) (Failure)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
