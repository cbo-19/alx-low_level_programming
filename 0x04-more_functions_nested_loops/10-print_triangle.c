#include "main.h"
#include<stdio.h>
/**
 * print_triangle - prints triangle
 *
 * @size: value
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				putchar ('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
