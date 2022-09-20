#include<stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: character value to reverse
 *
 * Return: 0
 */

void rev_string(char *s)
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
	while ( 1 >= 1)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
