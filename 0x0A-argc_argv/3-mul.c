#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * If the program does not receive two arguments, it should print Error
 * @argc: first parameter
 * @argv: second parameter
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	int result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

		if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
		{
			printf("Error\n");
			return (1);
		}

		result = num1 * num2;

		printf("%d\n", result);

	return (0);
}
