#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; s[i] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (i);
		}
	}
	return (0);
}
