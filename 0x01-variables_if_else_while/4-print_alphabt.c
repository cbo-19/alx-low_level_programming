#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*Declaring a char variable c for  alphabets except q and e */

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
