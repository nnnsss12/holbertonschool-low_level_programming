#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int start;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		/* n = (length_of_the_string + 1) / 2 */
		start = (len + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
