#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of string str
 * @str: string to be duplicated
 * Return: a pointer to a new string
 */

char *_strdup(char *str)
{
	char *new_pointer = malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);

	return (new_pointer);
	free(new_pointer);
}
