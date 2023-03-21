#include <stdio.h>
/**
 *main - Here is our main
 *Return: Always 0
 */

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
