#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	/* الوصول لنهاية النص */
	while (s[len] != '\0')
	{
		len++;
	}

	/* العودة للخلف والطباعة */
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
