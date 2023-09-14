#include "variadic_functions.h"

/**
 * write_char - prints a character
 * @args: va_list containing the character to print
 */
void	write_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * write_int - prints an integer
 * @args: va_list containing the integer to print
 */
void	write_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * write_float - prints a float
 * @args: va_list containing the float to print
 */
void	write_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * write_string - prints a string
 * @args: va_list containing the string to print
 */
void	write_string(va_list args)
{
	char *s = va_arg(args, char*);
	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * write_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void	print_all(const char * const format, ...)
{
	va_list	args;
	int i, j;
	char *str;

	write_t print[] = {
		{"c", write_char},
		{"i", write_int},
		{"f", write_float},
		{"s", write_string},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	str = "";
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != print[j].param[0])
			++j;
		if (j < 4)
		{
			printf("%s", str);
			print[j].f(args);
			str = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(args);
}
