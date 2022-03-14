#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	for (i = 48; i < 58; i++)
	{
		for (e = 48; e < 58; e++)
		{
			if (i != e && i < e)
			{
				putchar(i);
				putchar(e);
				if (i == 56 && e == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
