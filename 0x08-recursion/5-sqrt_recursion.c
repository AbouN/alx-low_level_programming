#include "main.h"

/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: input integer
 * Return: square root
 */
int _sqrt(int, int);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> rec sqrt
 * @n: num
 * @i: iter
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int squ = i * i;

	if (squ > n)
		return (-1);
	if (squ == n)
		return (i);
	return (_sqrt(n, i + 1));
}
