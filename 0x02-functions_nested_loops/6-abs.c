#include "main.h"
/**
*_abs - compute absolute value of an integer
*@i: check character c
*Return: x or i for an absolute value
*/
int _abs(int i)
{
	int x;

	if (i < 1)
	{
		x = i * (-1);
		return (x);
	}
	return (i);
}
