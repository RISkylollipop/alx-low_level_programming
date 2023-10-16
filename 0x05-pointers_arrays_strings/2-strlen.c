#include "main.h"
/**
 * _strlen - Lenght of a string
 *
 * Return: strlen
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	while (*s)
	{
	lenght++;
	s++;
	}
	return (lenght);
}
