#include<string.h>
#include "main.h"

/**
 * _strncat -  concatenates two string with alimit
 *
 * @dest: pointer to char
 * @src: pointer to char
 * @n: byte limit
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
		if (dest[i] == '\0')
		{
			int k = 0;

			if (src[i] != '\0' && k < n)
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
		}
	}
	return (dest);
}

