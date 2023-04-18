#include "main.h"
#include "stdlib.h"

/**
 * *malloc_checked -> allocates memory using malloc
 * @b: memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	while (p == NULL)
	{
		exit(98);
	}
	return (p);
}
