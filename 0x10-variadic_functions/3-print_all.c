#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints arguments based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 *           Any other character should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	int index = 0;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[index] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[index] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		index++;
	}

	va_end(args);
	printf("\n");
}
