#include "main.h"

/**
 * _isupper - prints upper letters
 *
 * @c: ascii character
 * Return: 1 if upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
