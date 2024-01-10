#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - This program will assign
 * a random number to the variable
 * @n: random number
 * Return: 0
 */

/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return;
}
