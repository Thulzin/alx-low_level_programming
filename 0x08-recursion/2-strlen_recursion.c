#include "main.h"

/**
 *  _strlen_recursion - a function that returns the length of a string
 *  @s: string to be calculated
 *  Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*S == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
