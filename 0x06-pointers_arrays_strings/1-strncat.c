#include "main.h"

/**
  * _strncat  - the main function
  * @n: Function vatr
  * @src: Function var to use
  *
  * @dest: Function var to use
  *
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	a = 0, c = 0;
	while (dest[a] != '\0')
	{
	a++;
	}
	while (c < n && src[c] != '\0')
	{
	dest[a] = src[c];
	a++;
	c++;
	}
	dest[a] = '\0';
	return (dest);
}
