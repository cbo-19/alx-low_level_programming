#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char z;
	/*Printing alphabets in reverse order */

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
