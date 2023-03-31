#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *rot13 -> Encodes a string using rot13
 * @str: input string
 * Return: coded
 */

char *rot13(char *str)
{
	char *coded = (char *) malloc(strlen(str) + 1);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char s = str[i];

		if (s >= 'a' && s <= 'z')
		{
			s = (s - 'a' + 13) % 26 + 'a';
		}
		else if (s >= 'A' && s <= 'Z')
		{
			s = (s - 'A' + 13) % 26 + 'A';
		}
		coded[i] = s;
	}
	coded[i] = '\0';
	return (coded);
}
