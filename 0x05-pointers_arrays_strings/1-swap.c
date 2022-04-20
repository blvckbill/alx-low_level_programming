#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 *
 * @a: ascii character
 * @b:ascii character
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
