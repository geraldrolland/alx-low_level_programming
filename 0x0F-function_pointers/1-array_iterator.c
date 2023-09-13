#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator -  executes a function given as a parameter on each element
 *@array: pointer to an array of integers
 *@size: size of the array
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
