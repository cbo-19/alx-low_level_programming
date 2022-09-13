#include<stdio.h>
#include<ctype.h>
#include "main.h"
/**
 *_islower - checks for lower cases in inputs
 *
 * c - is the character to print
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
