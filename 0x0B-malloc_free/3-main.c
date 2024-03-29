#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_grid - prints a grind of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * REturn: Nothing
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code for ALX School Students
 *
 * Return: Always 0
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printtf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	return (0);
}
