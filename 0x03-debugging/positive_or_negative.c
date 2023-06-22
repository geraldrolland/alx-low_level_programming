#include "main.h"
/**
* positive_or_negative - check negative or positive number
*@i:check character i
* Return: void
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive \n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
