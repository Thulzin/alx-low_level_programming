#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 64 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
