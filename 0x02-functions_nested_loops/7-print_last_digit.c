#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * Return: Returns the value of last digit
 *
 */

int print_last_digit(int num)
{
	int answer = num % 10;

	if (answer < 0)
	{
		answer *= -1;
	}
	_putchar('0' + answer);

	return (answer);
}
