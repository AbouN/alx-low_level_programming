#include <stdio.h>
#include <stdlib.h>

/**
 * main -> main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int result = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
