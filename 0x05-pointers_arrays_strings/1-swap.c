#include "main.h"

/**
 * swap_int -> swap the value of integers
 * @a: integer para to swap
 * @b: integer para to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
