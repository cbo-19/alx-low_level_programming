#include<stdio.h>
#include "main.h"

/**
 * swap_int - swaps integer values
 *
 * @a: one integer value
 * @b: the second integer value
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	/* use *a and *b and not a and b because these are pointers*/
	*a = *b;

	*b = *a;
}
