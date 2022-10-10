#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: values from included
 * @max: from this
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *m;
	int i;
	int x = min;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * ((max + 1) - (min)));
	if (m == NULL)
		return (NULL);
	for (i = 0; x <= max; i++)
	{
		m[i] = x;
		x++;
	}
	return (m);
}
