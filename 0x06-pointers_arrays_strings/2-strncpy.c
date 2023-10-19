#include "main.h"
/**
  * _strncpy - The main function.
  *
  * @src: Function var
  * @dest: Function var
  * @n: Function var
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	while  (a < n)
	{
	dest[a] = '\0';
	a++;
	}
	return (dest);
}


