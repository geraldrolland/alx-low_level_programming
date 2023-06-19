#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 102; ch++)
	{
		if (ch == 102)
		{
			putchar(ch);
			break;
		}
		else if (ch > 57 && ch < 97)
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
