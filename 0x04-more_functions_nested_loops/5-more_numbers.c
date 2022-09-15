#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * more_numbers - print ten times of numbers
 *
 */

void more_numbers(void)
{
	int i = 1;
	int a = 0;

	while (i <= 10)
	{
		while (a <= 14)
		{
			putchar(a);
			a++;
		}
		putchar('\n');

		i++;
		a = 0;
	}
}
