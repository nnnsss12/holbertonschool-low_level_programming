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
	/* حساب طول النص */
	while (str[len] != '\0')
	{
		len++;
	}

	/* تحديد نقطة البداية حسب القواعد المطلوبة */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	/* طباعة النصف الثاني */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
