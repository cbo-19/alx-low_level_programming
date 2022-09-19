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

	int c;
/* stores the original value of a before the swap so that *b will hold the original value of *a*/
	c = *a;

	*a = *b;

	*b = c;
}
