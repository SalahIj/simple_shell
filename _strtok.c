#include "shell.h"

/**
 * _strtok - The function name.
 * @str: the first input.
 * @del: the second input.
 * Return: the result.
 */

char *_strtok(char *str, char *del)
{
	static char *last;
	char *start, *end;

	if (str)
		last = str;
	else if (!last)
		return (NULL);
	for (start = last; *start != '\0' && _strchr(del, *start) != NULL; start++)
	;
	if (*start == '\0')
	{
		last = NULL;
		return (NULL);
	}
	for (end = start; *end != '\0' && _strchr(del, *end) == NULL; end++)
		;
	if (*end != '\0')
	{
		*end = '\0';
		last = end + 1;
	}
	else
		last = NULL;

	return (start);
}
