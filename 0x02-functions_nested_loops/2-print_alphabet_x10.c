#include<stdio.h>

/**
 * print_alphabet_x10 - this program prints alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char a = 'a';

	/* using nested while loop to repeat an action*/

	while (i <= 10)
	{

		while (a <= 'z')
		{
			putchar(a);

			a++;
		}
		putchar('\n');

		i++;
		a = 'a';
	}
}
