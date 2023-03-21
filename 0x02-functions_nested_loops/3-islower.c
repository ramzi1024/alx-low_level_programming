#include "main.h"

/**
 * _islower - checks the lower case alphabets
 *@c: The character to be checked
 * Return: 1 for the lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
