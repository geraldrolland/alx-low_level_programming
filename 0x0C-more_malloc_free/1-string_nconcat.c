#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - Write a function that concatenates two strings.
*@s1: input value
*@s2: input value
*@n: input value
*Return: ptr1
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, k;
	char *ptr1;

	size = strlen(s1) + strlen(s2);
	ptr1 = (char *)malloc(size * sizeof(char));
	for (i = 0, j = 0; i < strlen(s1) + 1; j++, i++)
	{
	if (*(s1 + i) == '\0')
	{
	if (n >= strlen(s2))
	{
	for (k = 0; *(s2 + k) != 0; k++, j++)
	{
	*(ptr1 + j) = *(s2 + k);
	}
	}
	else
	{
	for (k = 0; k < n; k++, j++)
	{
	*(ptr1 + j) = *(s2 + k);
	}
	}
	}
	*(ptr1 + j) = *(s1 + i);
	}
	*(ptr1 + j) = '\0';
	return (ptr1);
}
