#include "main.h"
#include <stdlib.h>
/**
*malloc_checked -function that allocates memory using malloc.
*@b: input value
*Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	else
	{
		return (ptr);
	}
}
