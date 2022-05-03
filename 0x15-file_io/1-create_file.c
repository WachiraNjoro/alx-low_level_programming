#include "main.h"

/**
 *create_file - creates a file and truncates text into it
 *@filename: name of the file to create
 *@text_content: text to write in file
 *
 * Return: 1 on success, -1 on failure to create file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		;
	rstatus = write(fd, text_content, i);
	if (rstatus == -1)
		return (-1);
	}

	close(fd);
	return (1);
}

