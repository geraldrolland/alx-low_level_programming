#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - searches for an integer
 *@array: pointer to an array of integers
 *@size: size of an array
 *@cmp: function pointer
 *Return: i on success or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}
