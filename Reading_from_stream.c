#include "shell.h"

/**
 * Reading_from_stream - the function name.
 * Return: the result.
 */

char *Reading_from_stream(void)
{
	char *buffer = NULL;
	int Char, i = 0;
	size_t size = BUFFER_SIZE;

	buffer = malloc(sizeof(char *) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		Char = _getchar();
		if (Char == EOF)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		else if (Char == '\n')
		{
			buffer[i] = '\0';
			return (buffer);
		}
		else
			buffer[i] = Char;
		i++;
		if (i >= BUFFER_SIZE)
		{
			size += size;
			buffer = malloc(sizeof(char *) * size);
			if (buffer == NULL)
			{
				perror("malloc");
				exit(EXIT_FAILURE);
			}
		}
	}
}
