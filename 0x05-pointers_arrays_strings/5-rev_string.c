#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in revers
 */
void rev_string(char *s)
{
	char rev;
	int c;
	int i;

	for (c = 0; s[c] != '\0'; ++c)
		;

	for (i = 0; i < c / 2; i++)
	{
		rev = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = rev;
	}
}
