#include "main.h"
/**
*_isupper - checks for uppercase character.
*@c: check the character c
*Return: 1 if c is upper , return 0 if not
*/

int _isupper(int c)
{
        int i;

        for (i = 65; i <= 90; i++)
        {
                if (i == c)
                {
                        return (1);
                }
        }
        return (0);
}
