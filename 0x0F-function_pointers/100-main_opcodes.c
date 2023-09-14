#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *main_str;
	int i;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_str = (char *)main;
	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%02hhx\n", main_str[i]);
			break;
		}
		printf("%02hhx ", main_str[i]);
	}
}
