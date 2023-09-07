#include <stdlib.h>
#include "main.h"
/**
 *array_range -  creates an array of integers.
 *@min: minimum number
 *@max: maximum number
 *Return: ptr on success or NULL on failure
 */
int *array_range(int min, int max)
{
	int size, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min < max; i++, min++)
	{
		ptr[i] = min;
	}
	ptr[i] = max;
	return (ptr);
}
