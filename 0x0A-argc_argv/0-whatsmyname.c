#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	printf("argv = %s\n", *argv);

	return (0);
}
