#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int y;
	int x;
	int i;
	int z;

	x = 0;
	y = 0;
	for (i = 0; i < 1024; i++)
	{
	if (i % 5 == 0)
	{
	x = x + i;
	}
	else if (i % 3 == 0)
	{
	y = y + i;
	}
	else
	{
	continue;
	}
	}
	z = x + y;
	printf("%d\n", z);
	return (0);
}
