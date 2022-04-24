#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
