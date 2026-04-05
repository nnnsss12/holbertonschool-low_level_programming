#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* الوصول لنهاية النص الأول */
	while (dest[i] != '\0')
		i++;

	/* إضافة حروف src بحد أقصى n أو حتى نهاية src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* إضافة حرف النهاية دائماً */
	dest[i] = '\0';

	return (dest);
}
