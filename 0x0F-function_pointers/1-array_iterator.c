#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator - function given as a parameter on each element of an array.
*@array: pointer to an array
*@size: size of an array
*@action: pointer to a function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
