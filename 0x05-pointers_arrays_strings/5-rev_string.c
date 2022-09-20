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
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= 1)
	{
		n = s[j];

		s[j] = s[i];
		s[i] = n;

		i--;
		j++;
	}
}
