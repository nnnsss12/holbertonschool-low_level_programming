#include <stdio.h>
#include <string.h>
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
	char *s;
	char buf[64];
	char *found;
	char *types = "cifs";

	i = 0;
	sep = 0;
	va_start(args, format);
	while (format && format[i])
	{
		buf[0] = '\0';
		s = NULL;
		found = strchr(types, format[i]);
		while (found && *found == 'c')
		{ sprintf(buf, "%c", va_arg(args, int)); s = buf; break; }
		while (found && *found == 'i')
		{ sprintf(buf, "%d", va_arg(args, int)); s = buf; break; }
		while (found && *found == 'f')
		{ sprintf(buf, "%f", va_arg(args, double)); s = buf; break; }
		while (found && *found == 's')
		{ s = va_arg(args, char *); break; }
		if (found)
		{
			if (sep)
				printf(", ");
			printf("%s", s ? s : "(nil)");
			sep = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
