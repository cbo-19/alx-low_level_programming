#include<stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 *
 * @a: pointer value
 * @n: value
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i+ 1) != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i])
		}
	}
}
