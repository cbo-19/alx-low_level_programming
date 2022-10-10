#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		m[i] = '\0';
	return (m);
}
