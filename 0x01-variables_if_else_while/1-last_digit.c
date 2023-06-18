#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	strlen(n);
	char last_digit = strlen(n) - 1;

	if (last_digit > '5')
	{
		printf("Last digit of %c is %c and is greater than 5", n, n[last_digit]);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %c is %c and is 0", n, n[last_digit]);
	}
	else
	{
		printf("Last digit of %c is %c and is less than 6 and not 0", n, n[last_digit]);
	}
	/* your code goes there */
	return (0);
}
