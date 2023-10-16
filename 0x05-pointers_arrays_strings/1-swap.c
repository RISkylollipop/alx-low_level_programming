#include "main.h"
/**
 * swap_int - to swap value of variable
 * @a: number to swap
 * @b: second number to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
