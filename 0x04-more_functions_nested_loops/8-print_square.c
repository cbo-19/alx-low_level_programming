#include<stdio.h>
#include "main.h"

/**
 * print_square - prints square
 *
 * @size: value
 */

void print_square(int size)
{
	int i = 0;
	int z = 0;

	if (size > 0)
	{
		while (i < size)
		{
			putchar('#');
			i++;
		}
		putchar('\n');
		z = 0;
		z++;
	}
	else
	{
		putchar('\n');
	}
}
