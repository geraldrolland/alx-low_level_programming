#include<stdio.h>
#include<stdlib.h>

/**
*int_index - function that searches for an integer.
*@array: pointer to an array
*@size: pointer to an array
*@cmp: pointer to a function
*Return: -1, or i
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		if ((*cmp)(array[i]) > 0)
			return (i);
	}
	return (-1);
}
