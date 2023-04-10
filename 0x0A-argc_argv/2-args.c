#include <stdio.h>

/**
 * main -> main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return = 0;
}
