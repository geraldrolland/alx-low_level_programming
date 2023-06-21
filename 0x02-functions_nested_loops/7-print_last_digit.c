#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*@i: check the character i
* Return: return n or lst for last digit of a number
*/
int print_last_digit(int i)
{
	int lst;

	lst = i % 10;
	if (lst < 0)
	{
	lst = lst * (-1);
	}
	_putchar(lst + '0');
	return (lst);
}
