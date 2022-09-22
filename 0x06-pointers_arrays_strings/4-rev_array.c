#include<stdio.h>
#include "main.h"
#include<string.h>

/**
 * reverse_array - reverse the content of an array
 *
 * @a: parameter pointer to int
 * @n: number of byte limit
 *
 */

void reverse_array(int *a, int n)
{
	int rev;
	int i = 0;
	int j = n - 1;

	while (j <= i)
	{
		rev = a[j];
		a[j] = a[i];
		a[i] = rev;

		i--;
		j++;
	}
}
