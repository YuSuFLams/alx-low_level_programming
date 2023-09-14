#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i;
	char			*str;

	va_start(args, n);
	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
