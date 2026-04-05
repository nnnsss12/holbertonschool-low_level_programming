#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int sep;
	char c;
	int n;
	double f;
	char *s;

	i = 0;
	sep = 0;
	va_start(args, format);
	while (format && format[i])
	{
		s = NULL;
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			if (sep)
				printf(", ");
			printf("%c", c);
			sep = 1;
		}
		else if (format[i] == 'i')
		{
			n = va_arg(args, int);
			if (sep)
				printf(", ");
			printf("%d", n);
			sep = 1;
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			if (sep)
				printf(", ");
			printf("%f", f);
			sep = 1;
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (sep)
				printf(", ");
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
			sep = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
