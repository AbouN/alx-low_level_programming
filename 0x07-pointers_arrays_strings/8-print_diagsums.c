#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> prints the sum of the 2 diag of a 2x2matrix of integers
 * @a: input array
 * @size: size of an array
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		s1 = s1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		s2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
