#include "main.h"
/**
*_isdigit - Entry point
*@c: check character c
*Return: i if c is a digit , return 0 if not
*/

int _isdigit(int c)
{
        int i;

        for (i = 48; i <= 57; i++)
        {
        if (i == c)
        {
        return (1);
        }
        }
        return (0);
}
