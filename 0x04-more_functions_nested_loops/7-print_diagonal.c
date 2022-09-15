#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: value
 */

void print_diagonal(int n)
{
	int space = 0;
	int lines = 0;

	if (n > 0)
	{
		while (lines < n)
		{
			while (space < lines)
			{
				putchar(' ');
				space++;
			}
			putchar('\\');
			putchar('\n');
			space = 0;
			lines++;
		}
	}
	else
	{
		putchar('\n');
	}
}
