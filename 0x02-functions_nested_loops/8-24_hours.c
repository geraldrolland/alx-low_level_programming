#include "main.h"
/**
*jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*Return: void
*/

void jack_bauer(void)
{
	int x;
	int y;
	int i;
	int k;

	for (k = 48; k <= 50; k++)
	{
		for (x = 48; x <= 57; x++)
		{
			if (k == 50 && x == 52)
			{
				break;
			}
			else
			{
				for (y = 48; y <= 53; y++)
				{
					for (i = 48; i <= 57; i++)
					{
						_putchar(k);
						_putchar(x);
						_putchar(':');
						_putchar(y);
						_putchar(i);
						_putchar('\n');
					}
				}
			}
		}
	}
}
