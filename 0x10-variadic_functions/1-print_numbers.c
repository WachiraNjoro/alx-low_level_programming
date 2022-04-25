#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator != NULL)
	{
		for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (index != (n - 1))
			printf("%s", separator);
	}}

	va_end(args);

	printf("\n");
}
