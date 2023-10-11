#include "main.h"
/**
 * times_table - To print times table
 * Return: 0.
 */
void times_table(void)

{
	int a, y, z, u, b;

	for (a = 0; a <= 9; a++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = a * y;
	if (z > 0)
	{
	u = z % 10;
	b = (z - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(b + '0');
	_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
