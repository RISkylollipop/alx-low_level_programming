#include "main.h"
/**
 * jack_bauer - To print every minutes
 * Return: minutes
 */

void jack_bauer(void)
{
	int a, m, c, d;

	for (a = 0; a <= 2; a++)
	{
	for (m = 0; m <= 9; m++)
	{
	if ((a <= 1 && m <= 9) || (a <= 2 && m <= 3))
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	_putchar(a + '0');
	_putchar(m + '0');
	_putchar(58);
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
}
}
}
}
}
}
