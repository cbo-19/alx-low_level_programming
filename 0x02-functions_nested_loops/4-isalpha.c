#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _isalpha - checks for alphabets
 *
 * @c: The character to print
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}
}
