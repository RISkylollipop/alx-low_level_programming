#include "main.h"
#include <stdio.h>
/**
 * rot13 - function
 * @s: String pointer
 * Return: String
 */
char *rot13(char *s)
{
	int a, c;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (c = 0; c < 52; c++)
	{
	if (s[a] == data1[c])
	{
	s[a] = datarot[c];
	break;
	}
	}
	}
	return (s);
}
