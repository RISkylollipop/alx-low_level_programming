#include "main.h"
/**
 * reverse_array - To print in reverse.
 *@a: the var char
 *@n: the number of string
 *
 * Return: rev value
 */

void reverse_array(int *a, int n)

{
	int b, c;

	for (b = 0; b < n--; b++)
	{
	c = a[b];
	a[b] = a[n];
	a[n] = c;
	}
}
