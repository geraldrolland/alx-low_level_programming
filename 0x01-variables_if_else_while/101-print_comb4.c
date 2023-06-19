#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 57; x++)
	{
	for (y = x + 1; y <= 57; y++)
	{
	for (z = y + 1; z <= 57; z++)
	{
	if ((y != x) != z)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (x == 55 && y == 56)
	continue;
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	putchar(10);
	return (0);
}
