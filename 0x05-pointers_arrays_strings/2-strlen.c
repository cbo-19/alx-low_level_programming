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
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
