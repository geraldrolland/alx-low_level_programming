#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	long j;
	long k;
	long sum;

	i = 0;
	j = 1;
	k = 2;
	sum = k;
	while (k + j < 4000000)
	{
	k = k + j;
	if (k % 2 == 0)
	sum = sum + k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
