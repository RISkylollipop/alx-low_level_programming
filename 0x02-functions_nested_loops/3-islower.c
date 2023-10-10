#include "main.h"
/**
 * _islower - TO chech for loweecase char
 * @c: To be check
 * Return: 1 for lowercase and (0) for otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
