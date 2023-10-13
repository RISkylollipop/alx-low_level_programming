#include "main.h"
/**
 * print_most_numbers - TO print number from 0-9 without 2,4
 * Return: (0)
 */
void print_most_numbers(void)
{
	int a;
	

	for (a = 0; a <= 9; a++)
	if (a == 2 || a == 4)
	{
	continue;
	}
	else 
	
	_putchar(a + 48);
	_putchar('\n');
}
