#include "main.h"

/**
 * puts_half - main function
 * @str: ascii character
 * Description: prints half of a string
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
