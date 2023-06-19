#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch == 101)
		{
			continue;
		}
		else if (ch == 113)
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
