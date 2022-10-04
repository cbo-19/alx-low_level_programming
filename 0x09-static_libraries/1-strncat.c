#include "main.h"
/**
 * _strncat - this function concatnates two strings
 *
 * @dest: dest string
 * @src: src string
 * @n: bytes to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int len = 0;
	int i;

	while (dest[l] != '\0')
	{
		l++;
		if (dest[l] == '\0')
		{
			for (i = 0; src[len] != '\0' && i < n; i++)
			{
				dest[l] = src[len];
				l++;
				len++;
			}
			dest[l] = '\0';
		}
	}
	return (dest);
}
