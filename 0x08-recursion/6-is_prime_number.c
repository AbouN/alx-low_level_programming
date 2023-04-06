#include "main.h"

/**
 * is_prime_number -> returns 1 if the input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: Prime number
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime -> checks prime num
 * @n: num
 * @i: iter
 * Return: Always 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		printf(1);
	return (check_prime(n, i + 1));
}
