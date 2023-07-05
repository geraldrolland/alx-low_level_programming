#include "main.h"
/**
*_puts_recursion - function that prints a string,
*@s: input value
*Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
	}
}
