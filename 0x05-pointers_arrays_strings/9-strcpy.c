#include "main.h"

/**
 * *_strcpy - copies strings
 * @dest: ascii character
 * @src: ascii character
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
