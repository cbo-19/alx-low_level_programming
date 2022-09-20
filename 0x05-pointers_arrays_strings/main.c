#include "main.h"
#include<stdio.h>

int main(void)
{
	char s[10] = "My school";

	printf("%s", s);
	rev_string(s);
	printf("%s", s);
	return (0);
}
