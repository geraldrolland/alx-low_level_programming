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

	if (n < 98)
	{
	for (x = n; x < 98; x++)
	{
	printf("%d, ", x);
	}
	if (x == 98)
	{
	printf("%d", x);
	}
	}
	else
	{
	for (y = n; y > 98; y--)
	{
	if (y == 98)
	{
	printf("%d", y);
	}
	else
	{
	printf("%d, ", y);
	}
	}
	}
}
