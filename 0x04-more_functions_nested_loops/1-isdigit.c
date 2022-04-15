#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: ascii character
 *
 * Return: 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
