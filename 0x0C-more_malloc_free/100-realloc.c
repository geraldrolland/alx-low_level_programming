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
	char *ptr1;
	unsigned int i;

	ptr1 = (void *)malloc(new_size);
	strcpy(ptr1, ptr);
	if (new_size > old_size)
		return (ptr1);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	return (NULL);
	}
	else
	{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr1[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (ptr1);
}
