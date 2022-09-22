#include<string.h>
#include "main.h"

/**
 * string_toupper - changes lower cases to upper
 *
 * @string: dest string
 *
 * return: string
 *
 */

char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32;
		}
	}
	return (string);
}
