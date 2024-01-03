#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * @s: function parameter
 */

void print_rev(char *s)
{
	int i;
	int str = 0;

	for (i = 0; s[i] != '\0'; i++)
		str++;

	for (i = str - 1; i >= 0; i--)
	_putchar (s[i]);
	_putchar ('\n');
}
