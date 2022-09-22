#include<string.h>
#include "main.h"

/**
 * _strncpy - copies one string to another
 *
 * @dest: pointer to char
 * @src: pointer to char
 * n: byte limit
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <n && src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i <n; i++)
	{
		dest[i] = '\0'\;
	}
	return (dest);
}

