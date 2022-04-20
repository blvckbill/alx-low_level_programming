#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: ascii character
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int f = 0;
	int b = 0;
	int z = 0;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (f < b + 1 / 2)
	{
		z = s[f];
		s[f] = s[b];
		s[b] = z;

		b--;
		f++;
	}
}
