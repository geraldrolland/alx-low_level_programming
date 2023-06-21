#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Entry point
*@n: check character n
* Return: void
*/
void print_to_98(int n)
{
	int x;
	int y;

	if (n <= 98)
	{
	for (; x < 98; x++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
