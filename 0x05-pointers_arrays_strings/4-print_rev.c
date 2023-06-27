#include "main.h"
/**
*print_rev - prints a string, in reverse, followed by a new line
*@s: check character s
* Return: void
*/

void print_rev(char *s)
{
	int longi;
	int o;

	longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
