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
	unsigned int i;
	unsigned int j;
	int sep;
	char *s;
	char *types = "cifs";
	int n;
	double d;

	i = 0;
	sep = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		s = NULL;
		n = 0;
		d = 0;
		while (types[j] && types[j] != format[i])
			j++;
		if (j < 3 && types[j])
		{
			j == 2 ? (d = va_arg(args, double), printf("%s%f", sep ? ", " : "", d))
				: (n = va_arg(args, int), j == 0 ? printf("%s%c", sep ? ", " : "", n) : printf("%s%d", sep ? ", " : "", n));
			sep = 1;
		}
		if (j == 3)
		{
			s = va_arg(args, char *);
			printf("%s%s", sep ? ", " : "", s ? s : "(nil)");
			sep = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
