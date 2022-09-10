#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

