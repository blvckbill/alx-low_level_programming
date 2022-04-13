#include <stdio.h>

/**
 * main - fibonacci 1
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, s, i;

	a = 1;
	b = 2;
	s = 3;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", s);
		a = b;
		b = s;
		s = a + b;
	}
	printf("%ld\n", s);

	return (0);
}
