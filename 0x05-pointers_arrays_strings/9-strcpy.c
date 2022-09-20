#include<stdio.h>
#include "main.h"

/**
 * _strcpy - copies strings
 *
 * @dest: the source
 * @src: the destination
 *
 * Return: Dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = src[length];
	return (dest);
}
