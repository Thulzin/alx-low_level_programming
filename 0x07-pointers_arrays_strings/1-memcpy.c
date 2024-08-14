#include "main.h"
/**
 * _memcpy -  a function that copies memory area
 * @n: number of bytes
 * @src: memory area one
 * @dest: memory area two
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
