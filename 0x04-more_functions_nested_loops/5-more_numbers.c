#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * more_numbers - print ten times of numbers
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}

