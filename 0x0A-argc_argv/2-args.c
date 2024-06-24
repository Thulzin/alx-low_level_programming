#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
