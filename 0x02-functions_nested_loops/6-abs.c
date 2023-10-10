#include "main.h"
/**
 * _abs - TO print absolute number of an nteger
 * @n: The compute number
 * Return; (0)
 */
int _abs(int n)

{

	if (n < 0)
	{
		int abs_value;
		abs_value = n * -1;
		return (abs_value);
	}
	return (n);
}

