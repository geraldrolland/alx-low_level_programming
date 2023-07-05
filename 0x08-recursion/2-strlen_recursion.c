#include "main.h"
/**
*_strlen_recursion - returns the length of a string.
*@s:input value
*Return: 0 and count
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	int count;

	s = s + 1;
	count = 1 + _strlen_recursion(s);
	return (count);
	}
}
