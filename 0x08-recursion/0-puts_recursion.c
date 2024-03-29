#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: the string to be printed
 * Return: 0(success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);

	_puts_recursion(s + 1);
	}
}
