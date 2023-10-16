#include "main.h"
/**
 * _strlen - Lenght of a string
 * @s: char lenght to check
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
