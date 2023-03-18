#include <stdio.h>
/**
 *main - Here is our main
 *Return: Always 0
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}
