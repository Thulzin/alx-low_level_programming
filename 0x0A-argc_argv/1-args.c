#include "stdio.h"
#include "main.h"

/**
 * main - a program that prints the number
 * of arguments passed into it
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
