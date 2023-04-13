#include "main.h"
#include <stdlib.h>

/**
 * *str_concat ->  concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, lenght1 = 0, lenght2 = 0;

	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;

	s3 = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < lenght1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (lenght1 + lenght2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
