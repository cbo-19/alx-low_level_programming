#include<stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: character value to print
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	int half = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	length = i + 1;
	if (length % 2 == 0;)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	while (half <= length)
	{
		if (str[half] != '\0')
		{
			putchar(str[half]);
		}
		half++;
	}
	putchar('\n');
}
