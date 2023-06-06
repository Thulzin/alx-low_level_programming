#include "main.h"
#include <stdio.h>

/**
 *_memcpy - Copies the memory area
 *@n: input
 *@src: input
 *@dest:input
 *Return: always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
