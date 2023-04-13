#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -> contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int lenght = 0;

	if (str == NULL)
		return (NULL);
	while (str[lenght])
		lenght++;
	dup = malloc(sizeof(char) * (lenght + 1));

	if (dup == NULL)
		return (NULL);
	while ((dup[i] = str[i]) != '\0')
		i++;
	return (dup);


}
