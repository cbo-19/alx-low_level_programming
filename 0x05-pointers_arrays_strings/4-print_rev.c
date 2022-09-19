#include<stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in the reverse order
 *
 * @s: character value to print
 *
 * Return: 0
 */

void print_rev(char *s)
{
	char n;
	int i;

	i = 0;


	while (n != '\0')
	{
		n = s[i];
		i++;
	}
	i--;
	while (i >= 1)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
