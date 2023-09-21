#include "main.h"

/**
 * *_strncat - concatenate two string
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dex = 0, de = 0;

	while (dest[dex++])
		de++;
	for (dex = 0; src[dex] && dex < n; dex++)
		dest[de++] = src[dex];
	return (dest);
}
