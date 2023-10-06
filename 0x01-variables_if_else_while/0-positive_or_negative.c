#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Fetch the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int B;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	B = n % 10;
	if (B < 5)
	{
		printf("Last digit of %d is %d negative\n", n, B);
	}
	else if (B == 0)
	{
		printf("Last digit of %d is %d zero\n", n, B);
	}
	else
	{
		printf("Last digit of %d is %d positive\n", n, B);
	}
	return (0);
}
