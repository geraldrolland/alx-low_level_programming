#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char passwd;

	printf("Password: ");
	srand(time(NULL));
	for (i = 0; i < 12; i++)
	{
		passwd = (char) ((rand() % 55) + 48);
		printf("%c", passwd);
	}
	printf("\n");
	return (0);
}
