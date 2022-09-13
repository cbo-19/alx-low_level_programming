#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 *
 * @n: The character passed
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		print("\n");
	}
	else
	{
		if (n > 98)
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			printf("98");
			printf("\n");
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
