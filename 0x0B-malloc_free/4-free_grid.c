#include <stdlib.h>
#include "main.h"
/**
 *free_grid - free two dimensional array
 *@grid: pointer to a pointer
 *@height: integer variable
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}
	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (*(grid + i) != NULL)
		{
			free(*(grid + i));
		}
		continue;
	}
	free(grid);
}
