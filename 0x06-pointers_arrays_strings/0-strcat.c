#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int a, c;

	a = 0, c = 0;

	while (dest[a] != '\0')
{
	a++;
}
	while (src[c] != '\0')
{
	dest[a] = src[c];
	a++;
	c++;

}
	dest[a] = '\0';
	return (dest);
}
