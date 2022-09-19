#include "main.h"
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

/**
 * _puts -  prints an output
 *
 * @s: character value to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = str[i];

		if (n != '\0')
		{
			putchar(n);
		}
	}
	putchar('\n');
}
