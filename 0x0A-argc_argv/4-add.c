#include <stdio.h>
#include <stdlib.h>

/**
 * main -> main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 1
 */

int main(int argc, char *argv[])
{
	int i, j, k, num;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
