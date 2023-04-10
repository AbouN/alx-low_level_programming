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
	int i, number;
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			number -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
