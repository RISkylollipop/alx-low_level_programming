#include "main.h"
#include <stdio.h>
/**
  *leet - function name
  * @n: Function var
  *Return: value of n
 */
char *leet(char *n)
{
	int b, d;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; n[b] != '\0'; b++)
	{
	for (d = 0; d < 10; d++)
	{
	if (n[b] == s1[d])
	{
	n[b] = s2[d];
	}
	}
	}
	return (n);
}
