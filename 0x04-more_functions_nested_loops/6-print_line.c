#include "main.h"

/**
 *print_line -> prints line
 *@n: integer para
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchat('\n');
	for (x = 0; x <= n; x++)
		_putchar(95);
	_putchar('\n');
}
