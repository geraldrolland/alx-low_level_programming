#include <stdio.h>

int main(void)
{
	int ch;

	ch = 52;
	while (ch <= 102 )
	{
		if (ch ==57)
		{
			ch = ch + 45;
			putchar(ch);
		}
		else
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
