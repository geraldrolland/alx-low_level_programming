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
	int z;
	int c;

	for (x = 48, n = 0; x <= 57; x++, n++)
	{
		for (y = 49 + n, c = 0; y < 57; y++, c++)
		{
			if (x == y)
			{
				continue;
			}
			else
			{
				for (z = 50 + c; z <= 57; z++)
				{
					if (y == z)
					{
						continue;
					}
					else if (x == z)
					{
						continue;
					}
					else if (y > z)
					{
						continue;
					}
					else
					{
						putchar(x);
						putchar(y);
						putchar(z);
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
