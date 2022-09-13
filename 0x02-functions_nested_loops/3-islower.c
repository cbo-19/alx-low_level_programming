#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * int _islower(int c) - checks for lower cases in inputs
 *
 * Return: Always num
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		num = 1;
	}

	else
	{
		num = 0;
	}

	return (num);
}
