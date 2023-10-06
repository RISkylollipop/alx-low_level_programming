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

	printf("size of a char: %d byte(s)\n", sizeof(F));
	printf("size of a int: %d byte(s)\n", sizeof(G));
	printf("size of a long int: %d byte(s)\n", sizeof(H));
	printf("size of a long long int: %d byte(s)\n", sizeof(J));
	printf("size of a float: %d byte(s)\n", sizeof(K));
	return (0);
}
