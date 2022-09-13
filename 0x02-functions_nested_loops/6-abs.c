#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _abs -checks the absolut number of an integer
 *
 * @a: The character to print
 *
 * Return: Always a
 */

/*prints the absolute value of an integer*/

int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (a);
	}
	else
	{
		a *= 1;
		return(a);
	}
}
