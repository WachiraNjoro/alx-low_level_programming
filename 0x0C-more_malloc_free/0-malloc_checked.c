#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer if successful, exit with status 98 unsuccessfully
 */

void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);

	if (pr == NULL)
		exit(98);

	return (pr);
}
