#include "main.h"

/**
 * *_memcpy -> copies n bytes from memory area src to memory area dest
 * @dest: destinationm mem
 * @src: source mem
 * @n: integer
 * Return: copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[b];
	return (dest);
}
