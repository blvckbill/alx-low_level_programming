#include <stdio.h>

/**
 * main - Printing numbers
 *
 * Return: Always (Success)
 */

int main(void)
{
	char n;
	
	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
