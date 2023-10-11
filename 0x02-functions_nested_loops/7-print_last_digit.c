#include "main.h"
/**
 * print_last_digit - To print last digit of number
 * @n: the target number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
	lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
