#include "main.h"
/**
 *_memset - fills the first n bytes of memory area
 *point by s with the constant byte b
 *@s: address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *Return: n
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
