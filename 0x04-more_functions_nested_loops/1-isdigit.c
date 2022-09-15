#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * _isdigit - checks for digits
 * @c: character to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0'; && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
