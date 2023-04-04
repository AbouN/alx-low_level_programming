#include "main.h"

/**
 * *_strchr -> ocates a character in a string.
 * @s: string
 * @c: character
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
			return (s);
	}
	return ('\0');
}
