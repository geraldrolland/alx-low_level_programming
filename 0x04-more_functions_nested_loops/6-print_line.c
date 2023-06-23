#include "main.h"
/**
*print_line - Write a function that draws a straight line in the termina
*@n: check character n
*Return: void
*/

void print_line(int n)
{
	int i;

	if (n != 0 || n > 0)
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
