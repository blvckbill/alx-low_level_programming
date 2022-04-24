#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether character is lower
 * @c: character
 * Return: 1 if true
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true
 */
int isDelimiter(char c)

{
	int i;

	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{

	char *ptr = s;

	int foundDelimit = 1;

	while (*s)

	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}

	return (ptr);
}
