#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*@argc: argument count
*@argv: argument vector
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int res;
	int i;
	int x;

	i = 1;
	res = 1;
	if (argv[i] == NULL)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	for (; i < argc; i++)
	{
	x = atoi(argv[i]);
	res = res * x;
	}
	printf("%d\n", res);
	}
	return (0);
}
