#include "main.h"
/**
 * puts2 -> prints every other character of a string,
 * starting with the first character
 * @str: parameter
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
