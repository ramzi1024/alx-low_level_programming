#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: empty output
 */

void times_table(void)
{
	int i, j, t, u, d;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		t = i * j;
	if (t > 9)
	{
		u = t % 10;
		d = (t - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(t + '0');
	}
	}
	_putchar('\n');
	}
}	
