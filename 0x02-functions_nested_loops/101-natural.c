#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always sum
 */

int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			sum += n;
		}
		else
		{
			if (n % 5 == 0)
			{
				sum += n;
			}
			n++;
		}
		printf("%d\n", sum);
	}
	return (sum);
}
