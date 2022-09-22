#include<string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter pointer to char
 * @s2: parameter pointer to char
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	while ((s1[i] != '\0' && s2[i] !='\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		result = 0;
	else
	{
		result = s1[i] - s2[i];
	}
	return (result);
}
