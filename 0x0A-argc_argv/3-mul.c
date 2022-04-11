#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers followed by a new line
 * @argc: Count of commandline parameters
 * @argv: Array of commandline arguments
 * Return: 0 (Always Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
