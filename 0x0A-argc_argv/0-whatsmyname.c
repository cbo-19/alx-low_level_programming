#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point containing arguments
 *
 * @argc -  counts arguments passed to the command line
 *
 * @argv -  considers strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count ++)
	{
		printf("%d, %s\n", count, argv[count]);
	}
}
