#include "main.h"
/**
 * more_numbers - To print moset numbers
 *
 * Return: (0)
 */
void more_numbers(void)
{
	int j, a;

	for (j = 1; j < 11; j++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a > 9)
	{
	_putchar((a / 10) + '0');
	}
	_putchar((a % 10) + '0');
	}
	_putchar('\n');
	}
}
