#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	int fh;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (fh = 65; fh <= 90; fh++)
	{
		putchar(fh);
	}
	putchar(10);
	return (0);
}
