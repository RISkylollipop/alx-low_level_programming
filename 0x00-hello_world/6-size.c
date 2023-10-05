#include <stdio.h>

/**
 *main - to print the size of data types
 *
 * Return: 0
 *
 */

int main(void)
{

	char F;
	int G;
	long int H;
	long long int J;
	float K;

	printf("size of a char: %lu byte(s)\n", sizeof 'F');
	printf("size of a int: %lu byte(s)\n", sizeof 'G');
	printf("size of a long int: %ld byte(s)\n", sizeof 'H');
	printf("size of a long long int: %lu byte(s)\n", sizeof 'J');
	printf("size of a float: %lu byte(s)\n", sizeof(K));
	return (0);
}
