#include<stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	/*assigning values to l andh with for loop*/

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 100) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				/*setting limit for comma*/
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
