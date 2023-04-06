#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be treated
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
