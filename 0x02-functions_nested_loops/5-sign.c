#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_sign - print the sign of number
 *
 * @n: integer to print
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			if (n < 0)
			{
				_putchar('-');
				return (-1);
			}
		}
	}
}
