#include "main.h"

/**
 *_islower - shows 1 if the input is a lowercase. 0 if otherwise
 *
 * @c: The character in ASCII code
 *
 * Return 1 if c is lowercase. 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
