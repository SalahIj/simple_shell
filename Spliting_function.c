#include "shell.h"

/**
 * Spliting_function - the function name.
 * @buffer: the first input.
 * @delemiter: the second input.
 * Return: the result.
 */

char **Spliting_function(char *buffer, char *delemiter)
{
	char **array, *token = NULL;
	int i = 0;

	array = malloc(sizeof(char *) * BUFFER_SIZE);
	if (array == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, delemiter);
	while (token != NULL)
	{
		if (token[0] == '#')
			break;

		array[i] = token;
		token = strtok(NULL, delemiter);
		i++;
	}
	array[i] = NULL;
	return (array);
}
