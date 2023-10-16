#include "main.h"
/**
 * _puts - To print string
 * @s: string name to beuse
 * Return: string
 */

void _puts(char *s)
{
	for (s = -1; s >= 0; s--)
	{
	_putchar(*s);
	}
	_putchar('\n');
}
