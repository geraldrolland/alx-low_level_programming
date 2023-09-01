#include <stdio.h>
#include "main.h"
/**
 *main - adds number
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, num;
	int res = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		res = res + num;
	}
	printf("%d\n", res);
	}
	return (0);
}

