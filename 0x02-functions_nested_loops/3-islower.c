#include "main.h"
/**
* _islower - checks lowercase character
*@c: The character to be checked
* Return: 1 if c is a lowercase character , if not return 0
*/
int _islower(int c)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
