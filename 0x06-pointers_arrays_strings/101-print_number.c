#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n : Number ro print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchaar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
