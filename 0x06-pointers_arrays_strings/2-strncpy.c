#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: First parameter
 * @src: Second parameter
 * @n: an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
