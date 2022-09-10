#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, p;
	/*using hexadecimal format to combinr*/

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					/*setting limit where putchar should putthe comma*/

					if (n != 55 || m != 56)
					{
						/*put commas after each set of comb. */
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
