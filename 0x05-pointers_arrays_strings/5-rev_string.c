#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: function parameter
 */

void rev_string(char *s)
{
	int i;
	int str = 0;

	for (i = 0; s[i] != '\0'; i++)
		str++;
	for (i = 0; i < str / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[str - 1 - i];
		s[str - 1 - i] = j;
	}
}
