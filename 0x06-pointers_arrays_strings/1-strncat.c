#include "main.h"
#include <string.h>

/**
*_strncat - a function that concatenates two strings
*@dest: first parameter
*@src: Secon parameter
*@n: number of bytes
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
