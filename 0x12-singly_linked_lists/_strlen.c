#include "lists.h"

/**
*_strlen - prints the lenght of a string
*@str: pointer to a constant string
*Return: size
*/
int _strlen(const char *str)
{
	int size;
	int i;

	size = 0;
	for(i = 0; *(str+i) != '\0'; i++)
	{
		size++;
	}
	return (size);
}
