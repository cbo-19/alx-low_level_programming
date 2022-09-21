#include<string.h>
#include "main.h"
#include<stdio.h>

/**
 * _strlen - gives the length of a string
 *
 * @s: the character to print its length
 *
 * Return: (i - 1)
 */

int _strlen(char *s)
{
	int count;
	int i;

	count = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ')
		{
			count++;
		}
	}
}
