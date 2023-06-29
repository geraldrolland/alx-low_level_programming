#include "main.h"
/**
*string_toupper-  changes all lowercase letters of a string to uppercase.
*@str: check pointer str
*Return : &str
*/
char *string_toupper(char *str)
{
	int i;
	int k;
	int count;

	count = 65;
	for (i = 0; str[i] != '\0'; i++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	count = count + 1;
	if (str[i] == k)
	{
	_putchar(count);
	}
	else if (str[i] == !)
	{
	_putchar('!');
	break;
	}
	else
	{
	continue;
	}
	}
	}
	return (&str);
}
