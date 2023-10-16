#include "main.h"
/**
 * _puts - To print string
 * @str: string name to beuse
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
