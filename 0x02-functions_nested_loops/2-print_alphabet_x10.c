#include<stdio.h>

/**
 * print_alphabet_x10 - this program prints alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;

	/* using nested while loop to repeat an action*/

	while(i < 10);
	{
		int a;
		a ='a';

		while(a <= 'z')
		{
			putchar(a);

			a++;
		}

		i++;

		putchar('\n');
	}
}
