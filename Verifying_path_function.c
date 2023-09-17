#include "shell.h"

/**
 * Verifying_path_function - the function name.
 * @command: the input.
 * Return: the result.
 */

char *Verifying_path_function(char *command)
{
	char *path, **path_dirs, *full_path;
	struct stat status;
	int i;

	path = _getenv("PATH");
	strtok(command, "\n");

	if (_strchr(command, '/') != NULL)
	{
		if (stat(command, &status) == 0)
			return (command);
	}
	else
	{
		path_dirs = Spliting_function(path, ":");
		for (i = 0; path_dirs[i]; i++)
		{
			full_path = malloc(_strlen(path_dirs[i]) + _strlen(command) + 2);
			if (full_path == NULL)
			{
				perror("malloc");
				exit(EXIT_FAILURE);
			}
			_strcpy(full_path, path_dirs[i]);
			_strcat(full_path, "/");
			_strcat(full_path, command);
			if (stat(full_path, &status) == 0)
				return (full_path);
			free(full_path);
		}
		free(path_dirs);
	}
	return (NULL);
}
