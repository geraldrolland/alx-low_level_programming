#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int n;
	int y;

	for (x = 48, n = 0; x <= 57; x++, n++)
	{
		for (y = 48 + n; y <= 57; y++)
		{
			if (x == y)
			{
				continue;
			}
			else
			{
				putchar(x);
				putchar(y);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
