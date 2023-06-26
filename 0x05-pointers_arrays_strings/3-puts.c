#include "main.h"
/**
*_puts - prints a string
*@str: check character str
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar(10);
}

