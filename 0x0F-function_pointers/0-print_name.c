#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name printed
 * @f: function to pointer
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
