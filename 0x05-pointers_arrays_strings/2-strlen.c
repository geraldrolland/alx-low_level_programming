#include "main.h"
/**
*_strlen - function that returns the length of a string
*@s:check character s
* Return: count
*/

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = count + i;
	}
	return (count);
}

