#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: int value
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
