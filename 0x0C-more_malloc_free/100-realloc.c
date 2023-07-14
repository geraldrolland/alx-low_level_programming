#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_realloc - function that reallocates a memory block using malloc and free
*@ptr: input value
*@old_size: input value
*@new_size: input value
*Return: ptr1
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	ptr1 = (void *)malloc(new_size);
	strcpy(ptr1, ptr);
	if (new_size > old_size)
		return (ptr1);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
	ptr1 = malloc(new_size);
	return (ptr1);
	free(ptr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	return (ptr1);
}
