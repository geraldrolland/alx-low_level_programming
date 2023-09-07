#include <stdlib.h>
#include "main.h"
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to a string
 *@old_size: intial size of ptr
 *@new_size: final size of ptr
 *Return: new_ptr on success or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size + 1);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = (*(char*)ptr + i);
		}
	}
	new_ptr = malloc(new_size);
	for (i = 0; i < new_size + 1; i++)
	{
		new_ptr[i] = (*(char*) ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
