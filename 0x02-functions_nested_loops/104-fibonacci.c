#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_halph1, fib1_halph2, fib2_halph1, fib2_halph2;
	unsigned long halph1, halph2;

	for (count = 0; count < 92; count++)
	{
	sum = fib1 + fib2;
	printf("%lu", sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fib1_halph1 = fib1 / 10000000000;
	fib2_halph1 = fib2 / 10000000000;
	fib1_halph2 = fib1 % 10000000000;
	fib2_halph2 = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	halph1 = fib1_halph1 + fib2_halph1;
	halph2 = fib1_halph2 + fib2_halph2;
	if (fib1_halph2 + fib2_halph2 > 9999999999)
	{
	halph1 += 1;
	halph2 %= 10000000000;
	}
	printf("%lu%lu", halph1, halph2);
	if (count != 98)
	printf(", ");
	fib1_halph1 = fib2_halph1;
	fib1_halph2 = fib2_halph2;
	fib2_halph1 = halph1;
	fib2_halph2 = halph2;
	}
	printf("\n");
	return (0);
}

