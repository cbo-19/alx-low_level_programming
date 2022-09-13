#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */

/*making a prototype for printing alphabets in lower case*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return;
}
