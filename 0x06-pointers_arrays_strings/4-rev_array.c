#include <stdio.h>
#include "main.h"
/**
*reverse_array - print reveres array
*@a: check pointer a
*@n:check variable n
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int k;

	k = n - 1;
	for (i = k; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (a[i] != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
