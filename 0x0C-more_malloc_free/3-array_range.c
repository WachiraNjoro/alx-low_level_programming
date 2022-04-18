#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values to stored and number of elements
 * Return: ponter to the new array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		array[i] = min++;

	return (array);
}
