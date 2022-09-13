#include<stdio.h>
#include<ctype.h>
#include "main.h"
#include "_putchar.c"
/**
 * int _islower(int c) - checks for lower cases in inputs
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
