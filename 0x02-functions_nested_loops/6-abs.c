#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @c: number to be computed
 * Return: Absolute number of value or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
