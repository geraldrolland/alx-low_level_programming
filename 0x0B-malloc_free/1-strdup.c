#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strdup -  which contains a copy of the string given as a parameter.
*@str: input value
*Return: NULL or ptr
*/
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
