#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number to input to draw line
 * Return: zero
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
