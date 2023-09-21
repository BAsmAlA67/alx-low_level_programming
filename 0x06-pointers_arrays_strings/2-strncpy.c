#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of byte from string src into dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the max number of byte to copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int in = 0, sr = 0;

	while (src[in++])
		sr++;
	for (in = 0; src[in] && in < n; in++)
		dest[in] = src[in];
	for (in = sr; in < n; in++)
		dest[in] = '\0';
	return (dest);
}
