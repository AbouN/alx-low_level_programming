#include "main.h"

/**
 * _strncat -> concatenates two strings
 * @dest: param one
 * @src: param two
 * @n: param three
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
