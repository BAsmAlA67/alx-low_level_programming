#include "main.h"
/*
 * print_rev - prints reversd string, followed by new line
 * @s: pointer tho the string ro print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');