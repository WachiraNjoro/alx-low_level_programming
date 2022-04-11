#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
}
return (0);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int sum = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}
