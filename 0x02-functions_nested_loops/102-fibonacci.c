#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;
	int c;
	int i;

	a = 1;
	b = 2;
	c = a + b;
	printf("%d, ", a);
	printf("%d, ", b);
	printf("%d, ", c);
	for (i = 0; i <= 47; i++)
	{
	a = b;
	b = c;
	c = a + b;
	printf("%d, ", c);
	}
	printf("\n");
	return (0);
}
