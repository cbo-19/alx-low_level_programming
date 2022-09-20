#include "main.h"
#include<stdio.h>

/**
 * puts2 - prints every other character
 *
 * @str: character value to print
 *
 */

void puts2(char *str)
{
	int i = 0;
	int n = 0;
	int c = 0;
	int cin = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	while (str[i] != '\0')
	{
		cin = i + n;
		if (cin <= n)
		{
			if (str[cin] != 0)
			{
				putchar(str[cin]);
			}
		}
		i++;
		n++;
	}
	putchar('\n');
}
