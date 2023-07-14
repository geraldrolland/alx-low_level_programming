#include "main.h"
#include <stdlib.h>
/**
*array_range - Write a function that creates an array of integers.
*@min: input value
*@max: input value
*Return: NULL or arr
*/
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *)malloc((max + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max + 1; i++)
	{
		*(arr + i) = 0 + i;
	}
	*(arr + i) = '\0';
	return (arr);
}
