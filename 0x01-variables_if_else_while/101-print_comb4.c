#include <stdio.h>

/**
 * main - prints the smallest combination
 * 3 digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a != b && a != c && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
