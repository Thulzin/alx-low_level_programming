#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number to be printed
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
