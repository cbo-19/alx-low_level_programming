#include<stdio.h>
#include "main.h"
#include<math.h>

/**
 * _pow_recursion -  returns a value with a power
 *
 * @x: an integer value
 * @y: the power
 * @result: answer to code
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = pow(x, y);
	return (result);

	if (y == 0)
	{
		return(-1);
	}
}
