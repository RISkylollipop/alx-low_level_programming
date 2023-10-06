#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: (0)
 */
int main(void)
{
	for (int i = 0; i < 16; i++)
{
	putchar('0' + i);
}
	putchar('\n');
	return (0);
}
