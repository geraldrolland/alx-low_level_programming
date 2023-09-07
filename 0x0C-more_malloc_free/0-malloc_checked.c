#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked -  allocates memory using malloc.
 *@b: size of memory
 *Return: ptr;
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
