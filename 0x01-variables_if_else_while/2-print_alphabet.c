#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring a variable c which is a character type */
	char c;
	/*Using for loop to start at the alphabet 'a' to 'z' */

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
