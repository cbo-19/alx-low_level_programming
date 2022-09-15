#include<stdio.h>
#include "main.h"
/**
 * print_line - prints a line a number of times
 *
 * @n: value
 */

void print_line(int n)
{
	int m;
	
	if (n > 0)
	{
		for(m = 0; m < n; m++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
