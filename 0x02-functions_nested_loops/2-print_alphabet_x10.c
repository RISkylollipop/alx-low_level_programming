#include "main.h"
/**
 * print_alphabet_x10 - To print alphabetx10
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int b;
	char a;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		}
}
