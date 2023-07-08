#include "main.h"
/**
* _isalpha- checks alphabetic character
*@c: character c is to be checked
* Return: 1 if c an upercase character or lowercase character , return 0 if not
*/
int _isalpha(int c)
{
        int x;
        int i;

        for (x = 65; x <= 90; x++)
        {
                if (x == c)
                {
                        return (1);
                }
        }
        for (i = 97; i <= 122; i++)
        {
                if (i == c)
                {
                        return (1);
                }
        }
        return (0);
}
