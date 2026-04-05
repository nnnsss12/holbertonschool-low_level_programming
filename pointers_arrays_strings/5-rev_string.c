#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = 0;
	/* حساب طول النص */
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	/* التبديل حتى المنتصف */
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
