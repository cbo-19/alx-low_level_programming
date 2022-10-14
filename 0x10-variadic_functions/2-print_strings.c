#include "variadic_functions.h"
/**
 * print_strings - this function print all the integers passed
 * @separator: separator char
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *argString;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		argString = va_arg(ap, char *);

		if (argString != NULL)
			printf("%s", argString);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
