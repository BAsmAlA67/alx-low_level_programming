#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string parameter input
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		++len;
	}

	return (len);
}
