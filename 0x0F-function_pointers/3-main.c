#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: number of arguments pass by user
 * @argv: arguments pass by user
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	int (*get)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	get = get_op_func(argv[2]);
	if (get == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get(first, second));
	return (0);
}
