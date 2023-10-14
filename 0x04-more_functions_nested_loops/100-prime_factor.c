#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor.
 * Return: 0
 */

int main(void)
{
	long int a, facM;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
	if (number % a == 0)
	{
	facM = number / a;
	}
	}
	printf("%ld\n", facM);
	return (0);
}
