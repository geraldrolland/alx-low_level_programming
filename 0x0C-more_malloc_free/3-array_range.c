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

	i = 0;
	if (min > max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
