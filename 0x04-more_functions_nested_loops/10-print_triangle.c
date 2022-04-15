#include "main.h"

/**
 * print_triangle - prints triangke
 * @size: size of triangle
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int row, column, k;

	if (size <= o)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (k = row + column; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
