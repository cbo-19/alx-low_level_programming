#include<string.h>
#include<stdio.h>

/**
 * *_strcat - concatentes two strings
 *
 * @dest: parameter pointer to char
 * @src: pointer to char
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];

		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
