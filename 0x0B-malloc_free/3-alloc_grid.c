#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - allocate two dimensional array
 *@width: width of the array
 *@height: height of the array
 *Return: arr
 */
int **alloc_grid(int width, int height)
{
	int *ptr;
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptr = (int *)malloc(sizeof(int) * width);
	*(arr + i) = ptr;
	if (ptr == NULL)
	{
		for (; i >= 0; i--)
		{
			free(*(arr + i));
		}
		free(arr);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	*(ptr + j) = 0;
	}
	}
	return (arr);
}
