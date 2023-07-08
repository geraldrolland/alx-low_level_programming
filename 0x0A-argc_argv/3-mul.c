#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	printf("Error");
	}
	else
	{
	if (strlen(argv[i]) >= 1)
	{
	for (; i < argc; i++)
	{
	x = strtol(argv[i], NULL, 10);
	res = res * x;
	}
	printf("%d\n", res);
	}
	else
	{
	printf("Error");
	}
	}
	return (1);
}

