#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
