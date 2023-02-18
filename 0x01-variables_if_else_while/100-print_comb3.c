#include <stdio.h>

/**
 * main - a program that prints all possible different combination of 2 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(",");
					putchar(" ");
				}
			}
		}
	}
	putchar("\n");
	return (0);
}
