#include "main.h"
/**
 *_strlen_recursion - prints the lenght of stirng
 *@s: poiter to a string
 *Return: count on success
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}

	s = s + 1;
	count = 1 + _strlen_recursion(s);
	return (count);
}
