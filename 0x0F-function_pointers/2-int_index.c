#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: size of the array
 * @cmp: function pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
