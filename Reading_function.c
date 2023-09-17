#include "shell.h"

/**
 * Reading_function - the function name.
 * Return: the result.
 */

char *Reading_function(void)
{
	char *buffer = NULL;
	size_t size = 0;
	ssize_t n_chars;

	n_chars = _getline(&buffer, &size, 0);
	if (n_chars == -1)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}
	return (buffer);
}
