#include<stdio.h>
#include "main.h"
#include<unistd.h>

/**
 * print_most_numbers - prints integers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			write(1, &i, 1);
		}
	}
	putchar('\n');
}
