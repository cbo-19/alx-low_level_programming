#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: int
 *
 * Return: char value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *complete;
	int i;
	unsigned int len1 = 0, len2 = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
	{
		complete = malloc(len1 + 1 + (sizeof(char) * len2));
		if (complete == NULL)
			return (NULL);
	}
	else
	{
		complete = malloc(len1 + 1 + (sizeof(char) * n));
		if (complete == NULL)
			return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		complete[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; j < len2; j++, i++)
			complete[i] = s2[j];
		complete[i] = '\0';
		return (complete);
	}
	for (j = 0; j < n; j++)
	{
		complete[i] = s2[j];
		i++;
	}
	complete[i] = '\0';
	return (complete);
}
