#include "main.h"

/**
 * print_rev -> prints a string, in reverse, followed by a new lin *e
 * @s: char input
 * Return: Alway 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o  > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}