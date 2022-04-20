#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: ascii character
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
		count--;

		for (; count >= 0; count--)
		{
			_putchar(s[count]);
		}

		_putchar('\n');
}
