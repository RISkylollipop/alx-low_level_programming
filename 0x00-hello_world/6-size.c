/**
 *main - size of various types on computer
 *
 * Return: 0
 *
 */
#include <stdio.h>
int main(void)
{
	char F;
	int G;
	long int H;
	long long int J;
	float K;

	printf("size of char: %lu byte(s)\n", sizeof(F));
	printf("size of int: %lu byte(s)\n", sizeof(G));
	printf("size of long int: %llu byte(s)\n" sizeof(H));
	printf("size of long long int: %lu byte(s)\n", sizeof(J));
	printf("sizeof float: %lu byte(s)\n", sizeof(K));
	return (0);
}
