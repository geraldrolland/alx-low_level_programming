#include "main.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal
*@n: check character c
*Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
	if (n == 0 || n < 0)
	{
	_putchar(10);
	break;
	}
	else
	{
	for (j = 0; j < 1 + i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar(10);
	}
	}
}

