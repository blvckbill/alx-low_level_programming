#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints length of a string
 * @s: ascii character
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
