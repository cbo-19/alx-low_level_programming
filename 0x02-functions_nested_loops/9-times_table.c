#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * times_table - prints the times table for a value
 *
 * Return : Return x
 */

void times_table(void)
{
	int n = 0;
	int  num;
	int x = num * n;

	while (n <= '9')
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar(x + '0');
			_putchar(',');
		}
		n++;
		num= '0';
	}
}
