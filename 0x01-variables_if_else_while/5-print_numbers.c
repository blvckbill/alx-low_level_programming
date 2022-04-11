#include <stdio.h>

/**
 * main - Printing numbers
 *
 * Return: Always (Success)
 */

int main(void)
{
	char n;
	
	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
