#include<stdio.h>
#include<stdlib.h>
/**
 * print_alphabet - this program prints alphabets
 *
 * Return: Always 0
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
}
